#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�迭 : array
	//int arr[3];
	///*arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d %d %d\n",arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr,sizeof(arr));*/

	////�ݸ��� �̿��ؼ� �ʱ�ȭ
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1)*10;
	//}
	////�ݸ��� �̿��ؼ� ���
	//for (int i = 0; i < 3; i++) {
	//	printf("%d", arr[i]);
	//}

	//�ǽ�
	//double arr[3]={1.1,2.1,3.1};
	//double arr[3];
	////�迭�� ũ�� ���ϱ�
	//int size = sizeof(arr) / sizeof(double);
	//printf("������:%d\n", size);
	////�ݸ���� �̿��ؼ� ���
	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//}
	//	//�ݺ����� �̿��ؼ� ���
	//for (int i = 0; i < size; i++) {
	//	printf("%.1f ", arr[i]);
	//}

	//������ �迭
	/*char arr[] = { 'a','b','c','d','e' };
	int size = sizeof(arr) / sizeof(char);
	

	for (int i= 0; i < size; i++) {
		printf("%c", arr[i]);
		
	}*/
	//define�� ���ǵ� ��ũ�� ���:������ �Ǳ� ���� ��ü
	//��)int a= 5; int = arr[len];
	//�迭���� ��
	//c�� �����迭
	/*int sum = 0;
	int arr[] = {2,5,7,40,39};
	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++) {
		sum+=arr[i];
		
	}printf("�հ�:%d", sum);*/


	//int arr[5],sum=0;
	//int size = sizeof(arr) / sizeof(int);

	////�Է¹ޱ�
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]������ �Է��ϼ���?",i+1);
	//	scanf("%d", &arr[i]);
	//}
	////����ϱ�
	//for (int i= 0; i < size; i++) {
	//	printf("%d %p\n", arr[i],&arr[i]); //%p �ּ�
	//}
	////�հ豸�ϱ�
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];

	//}printf("�հ�:%d", sum);
	
	//�ǽ�)���л��� ���� �Է¹޾� �հ�/���/�˻�
	/*int arr[2], sum = 0;
	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++) {
		printf("%d�� ����:", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("--------------------\n");
	for (int i = 0; i < size; i++) {
		sum += arr[i];
		printf("%d�� ������ %d\n",i+1,arr[i]);

	}	printf("--------------------\n");
	printf("�հ�:%d\n", sum);printf("���:%.f\n", (double)sum /size);*/
	
	//�˻�
	/*int no;
	char quit;*/ //���ắ��
	/*printf("�˻���ȣ?");
	scanf("%d", &no);
	printf("������ %d\n", arr[no-1]);*/
	//while��
	//while (1)
	//{
	//	printf("�˻���ȣ?");
	//	scanf("%d", &no);
	//	getchar(); //����ó��
	//	//�߸��� ��ȣ ó��
	//	if (no<1 || no>size) {
	//		printf("�߸��� ��ȣ\n");
	//		continue; //�������
	//	}
	//	printf("������ %d\n", arr[no - 1]);
	//	printf("--------------------\n");
	//	printf("����(q)");
	//	scanf("%c", &quit);
	//	if (quit == 'q') break;
	//}

	//do ~ while��
	//do {
	//		printf("�˻���ȣ?");
	//		scanf("%d", &no);
	//		getchar(); //����ó��
	//		//�߸��� ��ȣ ó��
	//		if (no<1 || no>size) {
	//			printf("�߸��� ��ȣ\n");
	//			continue; //�������
	//		}
	//		printf("������ %d\n", arr[no - 1]);
	//		printf("--------------------\n");
	//		printf("����(q)");
	//		scanf("%c", &quit);
	//		
	//} while (quit != 'q');
	
	//�Ǻ���ġ�� ���� ���ϱ�
	//0 1 2 3 5 8 13 .....
	

//	int fibo[20];
//	fibo[0] = 0; fibo[1] = 1;
//	for (int i = 2; i < 20; i++) {
//		fibo[i - 2] + fibo[i - 1];
//
//	}
//	//���
//	for (int i= 0; i < 20; i++) {
//		printf("%d\n", fibo[i]);
//	}
//	return 0;
//}