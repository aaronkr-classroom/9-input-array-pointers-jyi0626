#include <stdio.h>
#define MAX_CH 25

int getmystr(char buffer[], int limit) {
    int i;
    int ch;

    printf("Enter text (max %d chars): ", limit - 1);
    for (i = 0; i < limit - 1; i++) {
        ch = getchar();
        if (ch == '\n' || ch == EOF) {

        }
        buffer[i] = ch;
    }

    buffer[i] = '\0'; 

    if (i >= limit - 1) {
        return 0; 
    }
    else {
        return 1; 
    }
}

int main(void) {
    char input_str[MAX_CH];
    int state;

    state = getmystr(input_str, MAX_CH);

    if (state) {
        printf("Input: %s\n", input_str);
    }
    else {
        printf("Input: %s -> out of range\n", input_str);
    }

    
    while (getchar() != '\n');

    printf("\n이 창을 닫으려면 아무 키나 누르세요...\n");
    getchar();

    return 0;
}
