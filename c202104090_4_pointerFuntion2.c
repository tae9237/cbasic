#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arrayPoint(int argc, char**argv[]) {
	for (int i = 0; i < argc; i++) {
			printf("%s\n", argv[i]);
		}
}
int main() {
	//이차 문자열 배열의 매개변수
	//포인터의 배열
	char* p[3] = { "python","c","java" };
	printf("%p %p %p\n", p[0], p[1], p[2]);
	
	arrayPoint(3, p);
	//함수로 처리
	//for (int i = 0; i < 3; i++) {
	//	printf("%s\n", p[i]);
	//}

	//다차원배열의 포인터
	//char arr[][7]= { "python","c","java" };
	//char(*p)[3] = arr;
	//printf("%d %d %d\n", p,p+1,p+2);



	return 0;
}