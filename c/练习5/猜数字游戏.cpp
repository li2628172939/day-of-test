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
		printf("���������� >");
		scanf("%d", &num);
		if (num > ret) {
			printf("�´���");
		}
		else if (num < ret) {
			printf("��С��");
		}
		else {
			printf("��ϲ�㣬��¶��ˣ�\n");
			break;
		}
	}
}


int main() {
	int input = 0;
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;

	system("pause");
}

