#include <stdio.h>
#include <stdlib.h>

int main() {
	char ch = getchar();
	printf("ÇëÊäÈëÒ»¸ö×Ö·û£º");

	while (ch != EOF) {
		if (ch >= 'a' && ch <= 'z') {
			putchar(ch - 32);
		}
		else if (ch >= 'A '&& ch <= 'Z') {
			putchar(ch + 32);
		}
		else
			break;
	}


	system("pause");
	return 0;
}