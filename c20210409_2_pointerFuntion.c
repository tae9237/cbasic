#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�Լ�:call by raference
//�ּҸ� �Ű������� �޴´�
//main�Լ��� a�� ���� ���� ����
//void chang(int*p) {
//	*p = 20;
//}
//main�Լ��� �μ��� �ٲٱ�
//void twochang(int*pa, int*pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}

void sumCal(int*pa,int*psum) {
	*psum += *pa;
}
int main() {
	//�Լ��� ������ �ѱ��
	/*int a=10;
	change(&a);
	scanf("%d", &a);
	printf("a:%d\n", a);*/
	
	//�ǽ�1)�μ��ٲٱ�
	/*int a = 10, b = 20;
	twochang(&a, &b);
	printf("%d %d\n", a, b);*/


	//�ǽ�2)�ݺ����� �̿��ؼ� �Է¹������� ����
	int a, sum = 0;
	while (1) {
		printf("������?");
		scanf("%d",&a);
		if (a == 0) break;
		sumCal(&a,&sum);
	}
	printf("�����հ�:%d\n", sum);



}