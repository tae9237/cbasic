#include <stdio.h>

int main() {
	//������ �������� ����
	/*int a;*/
	//�ʱ�ȭ
	/*a = 10;
	printf("%d\n", a);*/

	//�Ǽ��� �������� ����     //float �� double ���̴� ���е�
	//float f; //4byte     //�Ҽ��� 6�ڸ�
	//double d; //8byte    //�Ҽ��� 6�ڸ� �̻�
	//f = 3.14424232324225252553; //�ʱ�ȭ
	//d = 3.14424232324225252553; //�ʱ�ȭ
	//printf("%.30f\n", f);
	//printf("%.30f\n", d);

	//������
	//����� ���ÿ� �ʱ�ȭ
	/*char c = 'a';
	printf("���ڴ� %c %d\n", c,c);*/

	//���������� ����Ʈ��
	/*int a = 100;
	printf("������ : %d\n", sizeof(a));
	float f = 3.14;
	double d = 3.14;
	printf("�Ǽ��� : %d\n", sizeof(f));
	printf("�Ǽ��� : %d\n", sizeof(d));
	char c = 'A';
	printf("char��: %d\n", sizeof(c));*/

	//���ڿ�
	//�迭�� �̸��� �ּҸ� ������ �ִ�:���
	//�迭�� ũ��� ���ڿ��� ũ�� +1
	//����� ���ÿ� �ʱ�ȭ �ÿ��� �迭�� ũ�� ��������
	char c[6]="hello"; //nul���ڸ� �������� �߰��� �ȴ�
	//c="hello";//����⶧���� �Ұ�

	printf("���ڿ�:%s ũ��:%d\n", c,sizeof(c));
	printf("%c\n", c[0]);

	

	return 0;

}