#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
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


	system("pause");
	return 0;

}