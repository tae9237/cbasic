#define _CRT_SECURE_NO_WARNINGS //scanf�Լ��� ����ϱ� ���ؼ�
#include <stdio.h>

int main(){
	//�Է��Լ�  //%d ����, %f �Ǽ�, %c ����, %s ���ڿ�, %p �ּ�
	//������ �Է¹ޱ�
	//int a;
	//printf("������?");
	//scanf("%d", &a); //a�� �ּ�
	//printf("�Է��Ѱ�: %d   �ּ�: %p\n",a,&a);

	//�Ǽ��� �Է¹ޱ�
	//float f; //4byte
	//double d;//8byte
	//printf("float �Ǽ���?");
	//scanf("%f", &f);
	//printf("double �Ǽ���?");
	//scanf("%lf", &d); //���˹��� double�ϰ�� : %lf
	//printf("�Է��� ��\n %f %p\n %f %p\n", f,&f,d,&d);

	//������ �Է¹ޱ�
	/*char c;
	printf("���ڴ�?");
	scanf("%c", &c);
	printf("�Է¹���: % c\n", c);*/

	//�ǽ�) �������� �Է¹޾Ƽ� �հ踦 ���
	/*int a;
	int b;*/
	/*printf("ù��°��?");
	scanf("%d", &a);
	printf("�ι�°��?");
	scanf("%d", &b);
	printf("%d + %d = %d\n", a, b, a + b);*/

	/*printf("�μ���?");
	scanf("%d %d", &a, &b);
	printf("�հ�:%d\n", a + b);*/

	//�ǽ�)������ ��¥(��,��,��)�� �Է� �޾Ƽ� ���
	//int year, month, day;
	//printf("������ ��¥?");
	//scanf("%d %d %d\n", &year, &month, &day);
	//printf("%d�� %d�� %d��\n", year, month, day);
	

	//�ǽ� �ΰ��� ������ �Է� �޾� ������� ���غ��ÿ�
	/*int a, b;
	printf("ù��°��?");
	scanf("%d", &a);
	printf("�ι�°��?");
	scanf("%d", &b);
	printf("%d +%d =%d\n", a, b, a + b);
	printf("%d -%d =%d\n", a, b, a - b);
	printf("%d *%d =%d\n", a, b, a * b);
	printf("%d /%d =%.2f\n", a, b, (double)a / b);*/

	//���� ó���ϱ� ���� ����
	//int a, b;
	//char c;
	//printf("first?");
	//scanf("%d", &a);
	//printf("second?");
	//scanf("%d", &b);

	//�� ���ڸ� �о ��ȯ�ϴ� �Լ�
	//getchar();//���͸� ó���ϱ� ���� ����
	
	//printf("c?");
	//scanf("%c", &c);

	//printf("%d %c %d=%d\n", a, c, b,a+b);

	//�ǽ�)�Ž����� ���

	//int amount, pay; //���ǰ�, �� ��
	//printf("���ǰ�?");
	//scanf("%d", &amount);
	//printf("����?");
	//scanf("%d", &pay);
	//pay > amount ? printf("�Ž�����:%d\n", pay - amount) : printf("�����ѵ�:%d\n", amount - pay);

	//pay > amount ? printf("�Ž�����:%d\n", pay - amount) :
		//amount > pay ? printf("�����ѵ�:%d\n", amount - pay) : printf("����Ϸ�\n");


	//�ǽ�)������ �հ�� ���
	/*int a,b,c;
	printf("����������?");
	scanf("%d", &a);
	printf("����������?");
	scanf("%d", &b);
	printf("����������?");
	scanf("%d", &c);

	int sum = a + b + c;
	printf("�հ�:%d\n", sum);
	printf("���:%.2f\n",sum/3.);*/

	//rgb �� �����
	/*int r, g, b;
	printf("red?"); scanf("%d", &r);
	printf("green?"); scanf("%d", &g);
	printf("blue?"); scanf("%d", &b);
	unsigned int rgb = r << 16| g << 8| b;
	printf("RGB:%0X\n", rgb);

	return 0;*/
}
