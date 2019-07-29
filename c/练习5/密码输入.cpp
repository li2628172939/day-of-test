#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
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


	system("pause");
	return 0;

}