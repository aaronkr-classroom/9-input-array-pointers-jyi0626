#include <stdio.h>
#include <conio.h>

int main() {
	char c = getch();
	printf("입력한 문자: %d\n", c);

	printf("버퍼에서 남은 문자: ");
	while ((c = getchar()) != '\n' && c != EOF) {
		putchar(c);

	}
	printf("\n");
	return 0;
}