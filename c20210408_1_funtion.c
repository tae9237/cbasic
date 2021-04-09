#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//매개변수:없다,반환값:없다
//void voidTest() {
//
//}
////매개변수:한개,반환값:없다
//void voidTest2(int a) {
//	printf("매개변수:%d\n", a);
//}
//void voidTest3(int a, int b) {
//	printf("두수의 합:%d\n", a + b);
//}
//매개변수 :반지름
//함수의 이름 : area, 매개변수이름 : r(double)
//원의 넓이를 출력해주는 기능
//call by velue 방식
//void area(double r) { //지역변수:함수실행시 생성, 함수 종료시 소멸
//	printf("원의넓이:%.2f\n", r*r*3.14);
//}
//매개변수:반지름(double)
//반환값:넓이(double)
//원의넓이를 구해서 반환하는 함수
//double areaReturn(double r) {
//	double area = r * r * 3.14;
//	return area; //반환값은 한개
//}

//세 정수를 매개변수로 받아서 합을 반환하는 함수
//int sum(int a,int b,int c) {
//	int sum = a + b + c;
//	return sum;
//}

// 두개의 정수를 매개변수로 받아서 나눈 실수값을 반환하는 함수
//double sum(int a, int b) {
//	return (double)a / b;
//}

// 두수를 매개변수로 받아 두수 중 크누 반환하는 함수
int big(int a, int b) {
	if (a > b)
		return a; //return은 함수의 종료
	else
		return b;
}
//진입점함수
int main() {
	//함수
	//viodTest();
	//voidTest2(10);
	//voidTest3(10,5);
	//double r; //지역변수
	//printf("반지름은?");
	//scanf("%lf", &r);
	//area(r);
	/*double r = 3.6;
	double rvalue=areaReturn(r);
	printf("넓이:%.2f\n", rvalue);*/

	//printf("합계%d\n",sum(20, 30, 40));

	//int a = 10, b = 3;
	//double d = sum(a, b);
	//printf("나눈값:%.2f\n", d);
	
	
	printf("큰수는 %d\n", big(20,30));
	
	 
	
	

	return 0;
}


