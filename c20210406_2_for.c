#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//반복문:for
	//int i;// 반복할 변수
	//for (i = 0; i < 10; i++) {
	//	printf("%d\n", i);
	//}
	
	//실습)구구단 출력
	
	//1)
	//int dan;
	//printf("단수는?");
	//scanf("%d", &dan);
	//for (int i = 1; i < 10; i++){
	//	printf("%d * %d = %d\n",dan, i,dan*i);
	//}


	//2
	/*while (1) {
		int dan;
		printf("단수는?");
		scanf("%d", &dan);
		if (dan == 0) break;
		for (int i = 1; i < 10; i++)
			printf("%d * %d = %d\n",dan, i,dan*i);
	}*/

	//3
	/*do {
		int dan;
		printf("단수는?");
		scanf("%d", &dan);
		if (dan != 0){
			for (int i = 1; i < 10; i++)
				printf("%d * %d = %d\n", dan, i, dan * i);
		}
	} while (dan != 0);*/

	////이중 for
	//for (int i= 2; i < 10; i++) {
	//	printf("--[%d]단--\n",i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d * %d=%d\n", i,j,i*j);
	//	}
	//}

	//삼중 for
	/*for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				printf("%d * %d =%d\n", i, j, k);
			}
		}
	}*/

	//실습 1~ 100까지의 합
	/*int sum=0;
	for (int i = 1; i < 101; i++) {
		sum += i;
	
	}printf("1 ~ 100까지의 합은:%d\n", sum);*/

	//실습 1~ n까지의 합
	
	/*int n,sum = 0;
	printf("n값은?");
	scanf("%d", &n);

	for (int i = 1; i < n+1; i++) {
		sum += i;

	}printf("1 ~ %d까지의 합은:%d", n, sum);*/

	//실습)큰수에서 작은수 빼기
	/*int a = 0, b = 0;
	
	for (int i = 0; i < 10;i++) {
		printf("두 정수를 입력하세요:"); scanf("%d", &a);
		if (a == 0) break;
		scanf("%d", &b);
		if (a > b)
			printf("절대값:%d\n", a - b);
		else
			printf("절대값:%d\n", b - a);
	}
	*/
	
	//실습 별찍기1
	
	/*for (int i = 0; i < 7; i++) {
		for (int j = 0; j <i+1; j++) {
			printf("*");
		}
		printf("\n");
	}*/


	//실습 별찍기2
	/*for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7-i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	//실습 별찍기3
	/*for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	//실습 별찍기4
	/*for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < (i*2)+1; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	
	//실습 합이 1000이상 되는 정수와 합 구하기
	/*int a, i = 0;
	for (a = 0; a < 46; a++) {
		i += a;

	}printf("정수:%d 합:%d\n", a, i);*/

	
	//실습 점심메뉴
	/*char a;
	do {
	printf("메뉴를 고르세요.\n");
	printf("1.짜장\n2.짬뽕\n3.불고기\n4.오리고기\n5.제육\n6.햄버거\nq:종료\n음식번호:");
	scanf("%c", &a);
	getchar();

	switch (a){
	case '1':
	case '2':
		printf("중식\n"); break;
	case '3':
	case '4':
	case '5':
		printf("한식\n"); break;
	case '6':
		printf("간식\n"); break;
	case 'q':
		printf("종료\n"); break;
	default:
		printf("잘못입력\n"); break;
	
	}

	} while (a!= 'q');*/
	
	//실습 팩토리얼 구하기
	//int fac = 7;
	//int mul = 1; //곱한값 누적변수
	//for (int i = 1; i <fac+1; i++) {
	//	mul *= i;

	//}
	//printf("%d\n", mul);
	
	//실습 1~10까지 정수에서 두수를 골라 두수의합이 10
	for (int i = 1; i < 10; i++) {
		for (int j = i; j<10; j++) {
			if(i+j==10)	printf("%d %d\n", i, j);
		}
		
	}

	

	return 0;
}