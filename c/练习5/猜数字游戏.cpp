#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void menu() {
	printf("****************\n");
	printf("**** 1.play ****\n");
	printf("**** 2.exit ****\n");
	printf("****************\n");
}
void game() {
	int ret = rand() % 100;
	int num = 0;
	while (1) {
		printf("请输入数字 >");
		scanf("%d", &num);
		if (num > ret) {
			printf("猜大了");
		}
		else if (num < ret) {
			printf("猜小了");
		}
		else {
			printf("恭喜你，你猜对了！\n");
			break;
		}
	}
}


int main() {
	int input = 0;
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;

	system("pause");
}

