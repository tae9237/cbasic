#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//조건식이 참일 때 수행할 문장 거짓일때 수행문장을 구별
	//int a = 10;
	//if (a > 0) {
	//	printf("양수\n");
	//}
	//else {
	//	//중첩if문
	//	if (a < 0) {
	//		printf("음수\n");
	//	}
	//	else {
	//		printf("양수도 음수도 아닙니다.\n");
	//	}
	//}
	//표현을 간단하게
	//int a = 0;
	//if (a > 0)
	//	printf("양수\n");

	//else if (a < 0) 
	//	printf("음수\n");

	//else 
	//	printf("양수도 음수도 아닙니다.\n");

	//실습)두정수를 입력받아 큰수를 출력(두수는 같을수도 있다)
	/*int a, b;

	printf("두정수?"); scanf("%d %d", &a, &b);
	if (a > b)
		printf("%d\n", a);
	else if (a < b)
		printf("%d\n", b);
	else
		printf("같다\n");*/

		//실습)학점
	/*int a;
	printf("점수는?"); scanf("%d", &a);
	if (a > 100 || a < 0) 
	printf("잘못된오류입니다.\n");
	else if (a >= 90)
		printf("A학점입니다.");
	else if (a >= 80)
		printf("B학점입니다.");
	else if (a >= 70)
		printf("C학점입니다.");
	else if (a >= 60)
		printf("D학점입니다.");
	else
		printf("F학점입니다.");*/

	//실습 과락체크
	/*int a, b, c;
	printf("국 영 수?"); scanf("%d%d%d", &a, &b, &c);
	if (a < 60 || b < 60 || c < 60) {
		printf("과락\n");
	}
	else {
		int sum = a + b + c;
	
		printf("합계:%d\n", sum);
		printf("평균:%.2f\n", sum/3.);
	}*/
	
	//실습)윤달계산
	/*int a;
	printf("몇년도입니까?"); scanf("%d", &a);
	if ((a % 4 == 0) && a % 100 != 0 || a % 400 == 0)
		printf("%d년은 윤달입니다.\n", a);
	else
		printf("%d년은 윤달이아닙니다.\n", a);*/
	
	//실습)메뉴선택
	/*printf("------------------------\n");
	printf("1.자장면\n2.짬뽕\n3.설렁탕\n4.비빔밥\n5.피자\n6.스파게티\n");
	printf("------------------------\n");
	int a;
	printf("메뉴?"); scanf("%d", &a);
	if (a == 1 || a == 2)
		printf("중식");
	else if (a == 3 || a == 4)
		printf("한식");
	else if (a == 5 || a == 6)
		printf("양식");
	else
		printf("잘못된 메뉴");
	


		return 0;
}*/