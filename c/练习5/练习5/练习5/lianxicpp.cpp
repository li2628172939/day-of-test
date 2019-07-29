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
	//定义一个字符串，保存输入的密码
	char password[] = { 0 };
	//密码最多输入三次，三次结束，跳出此循环
	for (i = 0; i < 3; i++) {
		printf("请输入密码：");
		//字符串类型%s，数组就是一个地址，不用取地址&
		scanf("%s", password);
		//strcmp函数比较两个字符串，相同返回0，不相同返回1
		if (0 == strcmp(password, "8023")) {
			break;
		}
		else {
			printf("密码输入错误，请重新输入！\n");
		}
	}
	//输入密码完成后，判断输入的次数是否小于等于三次
	if (i < 3) {
		printf("登陆成功！\n");
	}
	else {
		printf("退出程序！\n");
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
	//猜数字游戏
	int input = 0;
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("请选择：");
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
}
void game2() {
	//键盘接收字符
	fflush(stdin);
	printf("请输入一个字符：");
	int a ,ch;
	a = getchar();
	ch=getchar();
	recept(ch);
}
void game3() {
	//验证密码
	password();
}
void game4() {
	//折半查找
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key ;
	printf("请输入一个数字：");
	scanf("%d", &key);
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = bin_search(arr, key, size);
	if (ret == -1) {
		printf("找不到");

	}
	else {
		printf("找到了");
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



