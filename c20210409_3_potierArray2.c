#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�����迭�� ������
	/*int arr[][3] = { {1,2,3},{4,5,6} };
	int* p = arr;
	for (int i = 0; i < 6; i++) {
		printf("%d\n", *p++);
	}*/

	//�θ��� �л��� ������ ������ �迭
	int score[][3] = { {80,98,87},{82,100,91} };
	int sum = 0; double avg;
	int (*p)[3] = score;
	printf("%p %p\n", p, p + 1);
	
	for (int i = 0; i < 2; i++) {
		sum = (*p)[0] + (*p)[1] + (*p)[2];
		avg = sum / 3;
		printf("�հ�:%d ���:%.2f\n", sum, avg);
		p++;
	}
	
	return 0;
}