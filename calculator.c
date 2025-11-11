#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CH 100
#define NUM_CH 10

int parseNumber(char str[]) {
    int len = strlen(str);
    if (len == 0) return -1;

    for (int i = 0; i < len; i++) {
        if (!isdigit(str[i])) return -1;
    }

    return atoi(str);
}

int main() {
    char buffer[MAX_CH];
    char numStr[NUM_CH];
    int num1, num2, result;
    char op;

   
    printf("Enter first number: ");
    if (!fgets(buffer, MAX_CH, stdin)) return 1;
    buffer[strcspn(buffer, "\n")] = 0;
    if (strlen(buffer) >= NUM_CH) {
        printf("Error: Number too long!\n");
        return 1;
    }
    strcpy(numStr, buffer);
    num1 = parseNumber(numStr);
    if (num1 == -1) {
        printf("Error: Not a valid number!\n");
        return 1;
    }

  
    printf("Enter operator (+, -, *, /, %%): ");
    if (!fgets(buffer, MAX_CH, stdin)) return 1;
    if (strlen(buffer) < 1) {
        printf("Error: No operator entered!\n");
        return 1;
    }
    op = buffer[0];

    
    printf("Enter second number: ");
    if (!fgets(buffer, MAX_CH, stdin)) return 1;
    buffer[strcspn(buffer, "\n")] = 0;
    if (strlen(buffer) >= NUM_CH) {
        printf("Error: Number too long!\n");
        return 1;
    }
    strcpy(numStr, buffer);
    num2 = parseNumber(numStr);
    if (num2 == -1) {
        printf("Error: Not a valid number!\n");
        return 1;
    }

    
    switch (op) {
    case '+': result = num1 + num2; break;
    case '-': result = num1 - num2; break;
    case '*': result = num1 * num2; break;
    case '/':
        if (num2 == 0) { printf("Error: Division by zero!\n"); return 1; }
        result = num1 / num2; break;
    case '%':
        if (num2 == 0) { printf("Error: Modulo by zero!\n"); return 1; }
        result = num1 % num2; break;
    default:
        printf("Error: Invalid operator!\n"); return 1;
    }

    printf("Result: %d %c %d = %d\n", num1, op, num2, result);
    return 0;
}
