#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���ڿ��� ������
	//char str[] = "happy";
	////str = "angry"; //str�� ��� ���湰��
	//char* p = str;
	//printf("%s\n", p);

	//p = "python";
	//puts(p); //���ڿ������Լ�

	//�ǽ�)�̸��� �Է¹޾� �Է¹ް� ���
	//�����͸� �̿�

	char name[20];
	char* p = name;
	while (1) {
		printf("�̸���?");
		gets_s(name, sizeof(name));
		if (name[0] == 'q') break;
		printf("%s�� ȯ���մϴ�.\n",p);
		//puts(p);
		//printf("�� ȯ���մϴ�.\n");
	}
	
	
	return 0;
}
