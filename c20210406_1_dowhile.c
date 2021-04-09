#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//do ~while
	//int a = -1;
	//do {
	//	printf("%d\n", a);
	//} while (a > 0); //최소 한번은 실행

	//사용자에게 입력을 받아서 y이면 '계속플레이' 출력
	//char answer;
	//do {
	//	printf("뮤직~~~~~플레이\n");
	//	printf("계속 할까요(y)?");
	//	scanf("%c", &answer);
	//	getchar();//엔터값 처리
	//} while (answer == 'y');


	//실습)사용자가 입력한 수 더하기
	int a,b=0;
	do {
		printf("정수를 입력하세요:");
		scanf("%d", &a);
		b += a;
		
	} while (a!=0);
	printf("지금까지 더한 수는 %d", b);



	return 0;
}