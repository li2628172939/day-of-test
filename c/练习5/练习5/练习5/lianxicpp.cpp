#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string>
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

void recept(char ch) {
	while (ch != EOF) {
		if (ch >= 'a' && ch <= 'z') {
			putchar(ch - 32);
			break;
		}
		else if (ch >= 'A '&& ch <= 'Z') {
			putchar(ch + 32);
			break;
		}
		else
			break;
	}
}

void password() {
	int i = 0;
	//����һ���ַ������������������
	char password[] = { 0 };
	//��������������Σ����ν�����������ѭ��
	for (i = 0; i < 3; i++) {
		printf("���������룺");
		//�ַ�������%s���������һ����ַ������ȡ��ַ&
		scanf("%s", password);
		//strcmp�����Ƚ������ַ�������ͬ����0������ͬ����1
		if (0 == strcmp(password, "8023")) {
			break;
		}
		else {
			printf("��������������������룡\n");
		}
	}
	//����������ɺ��ж�����Ĵ����Ƿ�С�ڵ�������
	if (i < 3) {
		printf("��½�ɹ���\n");
	}
	else {
		printf("�˳�����\n");
	}
}

int bin_search(int arr[], int key, int size) {
	int left = 0;
	int right = size - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] > key) {
			right = mid - 1;
		}
		else if (arr[mid] < key) {
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}

void game1() {
	//��������Ϸ
	int input = 0;
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("��ѡ��");
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
}
void game2() {
	//���̽����ַ�
	fflush(stdin);
	printf("������һ���ַ���");
	int a ,ch;
	a = getchar();
	ch=getchar();
	recept(ch);
}
void game3() {
	//��֤����
	password();
}
void game4() {
	//�۰����
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key ;
	printf("������һ�����֣�");
	scanf("%d", &key);
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = bin_search(arr, key, size);
	if (ret == -1) {
		printf("�Ҳ���");

	}
	else {
		printf("�ҵ���");
	}
	printf("\n");
}
#include<iostream>
using namespace std;
int main() {
	int res=0;
	printf("*****************\n");
	printf("**** 1.game1 ****\n");
	printf("**** 2.game2 ****\n");
	printf("**** 3.game3 ****\n");
	printf("**** 4.game4 ****\n");
	printf("*****************\n");
	
	cin >> res;
	switch (res) {
	case 1:
		game1();
	case 2:
		game2();
	case 3:
		game3();
	case 4:
		game4();
	}

	system("pause");
	return 0;
}



