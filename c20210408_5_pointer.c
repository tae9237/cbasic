#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//����Ʈ����
	/*int a = 10;
	int* p = &a;
	printf("a:%d %p\n", a,&a);
	printf("p:%p %d\n", p,*p);

	char c = '&';
	char* p2 = &c;
	printf("c:%c %c\n",c,*p2);
	printf("c:%p %p\n", &c, p2);

	double d = 3.14;
	double* p3 = &d;
	printf("d:%.2f %p\n", d, &d);
	printf("d:%.2f %p\n", *p3,p3);

	float f = 4.21f;
	float* p4 = &f;
	printf("f:%.2f %p\n", f,&f);
	printf("f:%.2 %p\n", *p4, p4);*/

	//����Ʈ���� p�� �̿��Ͽ� a�� ���� b�ǰ��� ���
	/*int a = 10, b = 20;
	int* p = &a;
	printf("a:%d\n",*p);
	p = &b;
	printf("b:%d\n",*p);*/
	
	//�ǽ�)
	/*int a = 10, b = 20, c = 30, base = 100;
	int* p = &a;
	*p += base;
	printf("a:%d\n", *p);
	p = &b;
	*p += base;
	printf("b:%d\n", *p);
	p = &c;
	*p += base;
	printf("c:%d\n", *p);*/
	
	//�迭�� ������
	/*int arr[3]={ 10,20,30 };
	int* p = arr;*/
	/*printf("%d\n", *p);
	printf("%d\n", *(p+1));
	printf("%d\n", *(p+2));*/
	//�ݺ����� �̿��Ͽ� ���
	/*for (int i = 0; i < 3; i++) {
		printf("%d %d %d %d\n", *(p + i),*(arr+i),arr[i],p[i]);
	}*/
	
	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d\n", *p++);
	//	//arr++; �Ұ���
	//}

	/*char arr[] = { 'p','y','t','h','o','n' };
	char size = sizeof(arr) / sizeof(char);
	char* p = arr;
	for (int i = 0; i < size; i++) {
		printf("%c\n", *(p + i));
	}*/

	//�ǽ� �Ǻ���ġ ������ �����͸� �̿��ؼ� ���ϰ� ���
	int fibo[20];
	int* p = fibo;
	*p = 0; p++;
	*p = 1; p++;
	for (int i = 2; i < 20; i++) {
		*p = *(p - 2) + *(p - 1);
		p++;
	}
	p = fibo;//ó�� ��ġ��
	for (int i = 0; i < 20; i++) {
		printf("%d\n",*p);
		p++;
	}


	return 0;
}