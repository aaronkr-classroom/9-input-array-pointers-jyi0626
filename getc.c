#include <stdio.h>

int main() {
	char ch;

	printf("Enter chars to read ( @ to stop) >>> ");

	while ((ch = getc(stdin)) != '@') {
		putchar(ch);

	}
	printf("\nEnd of input.\n");

	return 0;
}