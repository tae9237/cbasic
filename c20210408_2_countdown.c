#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//�Ű����� : ī��Ʈ�ٿ� ��
//��ȯ�� : ����
//���:ī��Ʈ �ٿ��� ���
 
void c(int a) {
	for (int i = 5; i > -1; i--) {
		Sleep(1000); //1/1000�� ����
		printf("%d��\n", i);
	}
}

int main() {
	////ī��Ʈ �ٿ�
	////5��....�߻�
	//printf("ī��Ʈ�ٿ� ����\n");
	//for (int i = 5; i >-1; i--) {
	//	Sleep(1000); //1/1000�� ����
	//	printf("%d��\n", i);

	//}
	//printf("�߻�\n");

	printf("ī��Ʈ�ٿ����\n");
	c(5);
	printf("�߻�\n");
	return 0;
}