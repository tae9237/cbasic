#define _CRT_SECURE_NO_WARNINGS //scanf함수를 사용하기 위해서
#include <stdio.h>

int main(){
	//입력함수  //%d 정수, %f 실수, %c 문자, %s 문자열, %p 주소
	//정수형 입력받기
	//int a;
	//printf("정수는?");
	//scanf("%d", &a); //a의 주소
	//printf("입력한값: %d   주소: %p\n",a,&a);

	//실수형 입력받기
	//float f; //4byte
	//double d;//8byte
	//printf("float 실수는?");
	//scanf("%f", &f);
	//printf("double 실수는?");
	//scanf("%lf", &d); //포맷문자 double일경우 : %lf
	//printf("입력한 값\n %f %p\n %f %p\n", f,&f,d,&d);

	//문자형 입력받기
	/*char c;
	printf("문자는?");
	scanf("%c", &c);
	printf("입력문자: % c\n", c);*/

	//실습) 두정수를 입력받아서 합계를 출력
	/*int a;
	int b;*/
	/*printf("첫번째수?");
	scanf("%d", &a);
	printf("두번째수?");
	scanf("%d", &b);
	printf("%d + %d = %d\n", a, b, a + b);*/

	/*printf("두수는?");
	scanf("%d %d", &a, &b);
	printf("합계:%d\n", a + b);*/

	//실습)오늘의 날짜(년,월,일)를 입력 받아서 출력
	//int year, month, day;
	//printf("오늘의 날짜?");
	//scanf("%d %d %d\n", &year, &month, &day);
	//printf("%d년 %d월 %d일\n", year, month, day);
	

	//실습 두개의 정수를 입력 받아 산술연산 구해보시오
	/*int a, b;
	printf("첫번째수?");
	scanf("%d", &a);
	printf("두번째수?");
	scanf("%d", &b);
	printf("%d +%d =%d\n", a, b, a + b);
	printf("%d -%d =%d\n", a, b, a - b);
	printf("%d *%d =%d\n", a, b, a * b);
	printf("%d /%d =%.2f\n", a, b, (double)a / b);*/

	//엔터 처리하기 위한 예제
	//int a, b;
	//char c;
	//printf("first?");
	//scanf("%d", &a);
	//printf("second?");
	//scanf("%d", &b);

	//한 문자를 읽어서 변환하는 함수
	//getchar();//엔터를 처리하기 위한 목적
	
	//printf("c?");
	//scanf("%c", &c);

	//printf("%d %c %d=%d\n", a, c, b,a+b);

	//실습)거스름돈 계산

	//int amount, pay; //물건값, 낸 돈
	//printf("물건값?");
	//scanf("%d", &amount);
	//printf("낸돈?");
	//scanf("%d", &pay);
	//pay > amount ? printf("거스름돈:%d\n", pay - amount) : printf("부족한돈:%d\n", amount - pay);

	//pay > amount ? printf("거스름돈:%d\n", pay - amount) :
		//amount > pay ? printf("부족한돈:%d\n", amount - pay) : printf("정산완료\n");


	//실습)국영수 합계와 평균
	/*int a,b,c;
	printf("국어점수는?");
	scanf("%d", &a);
	printf("영어점수는?");
	scanf("%d", &b);
	printf("수학점수는?");
	scanf("%d", &c);

	int sum = a + b + c;
	printf("합계:%d\n", sum);
	printf("평균:%.2f\n",sum/3.);*/

	//rgb 값 만들기
	/*int r, g, b;
	printf("red?"); scanf("%d", &r);
	printf("green?"); scanf("%d", &g);
	printf("blue?"); scanf("%d", &b);
	unsigned int rgb = r << 16| g << 8| b;
	printf("RGB:%0X\n", rgb);

	return 0;*/
}
