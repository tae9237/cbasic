#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Ű�����:����,��ȯ��:����
//void voidTest() {
//
//}
////�Ű�����:�Ѱ�,��ȯ��:����
//void voidTest2(int a) {
//	printf("�Ű�����:%d\n", a);
//}
//void voidTest3(int a, int b) {
//	printf("�μ��� ��:%d\n", a + b);
//}
//�Ű����� :������
//�Լ��� �̸� : area, �Ű������̸� : r(double)
//���� ���̸� ������ִ� ���
//call by velue ���
//void area(double r) { //��������:�Լ������ ����, �Լ� ����� �Ҹ�
//	printf("���ǳ���:%.2f\n", r*r*3.14);
//}
//�Ű�����:������(double)
//��ȯ��:����(double)
//���ǳ��̸� ���ؼ� ��ȯ�ϴ� �Լ�
//double areaReturn(double r) {
//	double area = r * r * 3.14;
//	return area; //��ȯ���� �Ѱ�
//}

//�� ������ �Ű������� �޾Ƽ� ���� ��ȯ�ϴ� �Լ�
//int sum(int a,int b,int c) {
//	int sum = a + b + c;
//	return sum;
//}

// �ΰ��� ������ �Ű������� �޾Ƽ� ���� �Ǽ����� ��ȯ�ϴ� �Լ�
//double sum(int a, int b) {
//	return (double)a / b;
//}

// �μ��� �Ű������� �޾� �μ� �� ũ�� ��ȯ�ϴ� �Լ�
int big(int a, int b) {
	if (a > b)
		return a; //return�� �Լ��� ����
	else
		return b;
}
//�������Լ�
int main() {
	//�Լ�
	//viodTest();
	//voidTest2(10);
	//voidTest3(10,5);
	//double r; //��������
	//printf("��������?");
	//scanf("%lf", &r);
	//area(r);
	/*double r = 3.6;
	double rvalue=areaReturn(r);
	printf("����:%.2f\n", rvalue);*/

	//printf("�հ�%d\n",sum(20, 30, 40));

	//int a = 10, b = 3;
	//double d = sum(a, b);
	//printf("������:%.2f\n", d);
	
	
	printf("ū���� %d\n", big(20,30));
	
	 
	
	

	return 0;
}


