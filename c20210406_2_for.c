#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ݺ���:for
	//int i;// �ݺ��� ����
	//for (i = 0; i < 10; i++) {
	//	printf("%d\n", i);
	//}
	
	//�ǽ�)������ ���
	
	//1)
	//int dan;
	//printf("�ܼ���?");
	//scanf("%d", &dan);
	//for (int i = 1; i < 10; i++){
	//	printf("%d * %d = %d\n",dan, i,dan*i);
	//}


	//2
	/*while (1) {
		int dan;
		printf("�ܼ���?");
		scanf("%d", &dan);
		if (dan == 0) break;
		for (int i = 1; i < 10; i++)
			printf("%d * %d = %d\n",dan, i,dan*i);
	}*/

	//3
	/*do {
		int dan;
		printf("�ܼ���?");
		scanf("%d", &dan);
		if (dan != 0){
			for (int i = 1; i < 10; i++)
				printf("%d * %d = %d\n", dan, i, dan * i);
		}
	} while (dan != 0);*/

	////���� for
	//for (int i= 2; i < 10; i++) {
	//	printf("--[%d]��--\n",i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d * %d=%d\n", i,j,i*j);
	//	}
	//}

	//���� for
	/*for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				printf("%d * %d =%d\n", i, j, k);
			}
		}
	}*/

	//�ǽ� 1~ 100������ ��
	/*int sum=0;
	for (int i = 1; i < 101; i++) {
		sum += i;
	
	}printf("1 ~ 100������ ����:%d\n", sum);*/

	//�ǽ� 1~ n������ ��
	
	/*int n,sum = 0;
	printf("n����?");
	scanf("%d", &n);

	for (int i = 1; i < n+1; i++) {
		sum += i;

	}printf("1 ~ %d������ ����:%d", n, sum);*/

	//�ǽ�)ū������ ������ ����
	/*int a = 0, b = 0;
	
	for (int i = 0; i < 10;i++) {
		printf("�� ������ �Է��ϼ���:"); scanf("%d", &a);
		if (a == 0) break;
		scanf("%d", &b);
		if (a > b)
			printf("���밪:%d\n", a - b);
		else
			printf("���밪:%d\n", b - a);
	}
	*/
	
	//�ǽ� �����1
	
	/*for (int i = 0; i < 7; i++) {
		for (int j = 0; j <i+1; j++) {
			printf("*");
		}
		printf("\n");
	}*/


	//�ǽ� �����2
	/*for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7-i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	//�ǽ� �����3
	/*for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	//�ǽ� �����4
	/*for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < (i*2)+1; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	
	//�ǽ� ���� 1000�̻� �Ǵ� ������ �� ���ϱ�
	/*int a, i = 0;
	for (a = 0; a < 46; a++) {
		i += a;

	}printf("����:%d ��:%d\n", a, i);*/

	
	//�ǽ� ���ɸ޴�
	/*char a;
	do {
	printf("�޴��� ������.\n");
	printf("1.¥��\n2.«��\n3.�Ұ��\n4.�������\n5.����\n6.�ܹ���\nq:����\n���Ĺ�ȣ:");
	scanf("%c", &a);
	getchar();

	switch (a){
	case '1':
	case '2':
		printf("�߽�\n"); break;
	case '3':
	case '4':
	case '5':
		printf("�ѽ�\n"); break;
	case '6':
		printf("����\n"); break;
	case 'q':
		printf("����\n"); break;
	default:
		printf("�߸��Է�\n"); break;
	
	}

	} while (a!= 'q');*/
	
	//�ǽ� ���丮�� ���ϱ�
	//int fac = 7;
	//int mul = 1; //���Ѱ� ��������
	//for (int i = 1; i <fac+1; i++) {
	//	mul *= i;

	//}
	//printf("%d\n", mul);
	
	//�ǽ� 1~10���� �������� �μ��� ��� �μ������� 10
	for (int i = 1; i < 10; i++) {
		for (int j = i; j<10; j++) {
			if(i+j==10)	printf("%d %d\n", i, j);
		}
		
	}

	

	return 0;
}