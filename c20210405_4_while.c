#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ݺ��� : while
	//while (1) {
	//	printf("c"); break;
	//}
	// 
	//break �ݺ��� Ż��
	//int cnt = 0;
	//while (1) { //1:true, 0 :false
	//	printf("%d c!!!\n",cnt+1);
	//	cnt++;//cnt += 1;//cnt=cnt+1;
	//	if (cnt > 9) break;
	//}

	//1~1000������ ��
	//int i=0, sum=0;
	//while(i<1000){
	//	printf("%d\n", ++i);
	////	//i++;
	//	sum += ++i;//sum = sum + i;
	//}
	//printf("�հ�:%d\n", sum);

	//���� 2000�� �Ѵ� ������ �� ���� ���϶�
	//1+2+3+4......+n
	//1,3,6,10.....2000�� �Ѵ� n
	/*int a = 0, b = 0;
	while (b<2000) {
		a++;
		b += a;
		
	}
	printf("a:%d b:%d\n", a,b);*/

	//�ǽ�)20������ 3�ǹ�� ���
	/*1)
	int a = 0;
	while (a < 20) {
		a++;
		if (a%3==0)
			printf("%d\n", a);
	}*/
	//2)
	/*int a = 3;
	while (a < 20) {
		printf("%d\n", a);
		a += 3;*/

	//3)
	/*int a = 0;
	while(1){
		a+=3;
		if (a > 20) break;
		printf("%d\n", a);
		
	}*/

	//continue:���
	//1~10���� ¦���� ���
	/*int a = 0;
	while (a < 10) {
		a++;
		if (a % 2 != 0) continue;
			printf("%d\n", a);
			
	}*/


	return 0;

}