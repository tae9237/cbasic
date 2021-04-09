#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//배열 : array
	//int arr[3];
	///*arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d %d %d\n",arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr,sizeof(arr));*/

	////반목문을 이용해서 초기화
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1)*10;
	//}
	////반목문을 이용해서 출력
	//for (int i = 0; i < 3; i++) {
	//	printf("%d", arr[i]);
	//}

	//실습
	//double arr[3]={1.1,2.1,3.1};
	//double arr[3];
	////배열의 크기 구하기
	//int size = sizeof(arr) / sizeof(double);
	//printf("사이즈:%d\n", size);
	////반목분을 이용해서 출력
	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//}
	//	//반복문을 이용해서 출력
	//for (int i = 0; i < size; i++) {
	//	printf("%.1f ", arr[i]);
	//}

	//문자형 배열
	/*char arr[] = { 'a','b','c','d','e' };
	int size = sizeof(arr) / sizeof(char);
	

	for (int i= 0; i < size; i++) {
		printf("%c", arr[i]);
		
	}*/
	//define에 정의된 매크로 상수:컴파일 되기 전에 대체
	//예)int a= 5; int = arr[len];
	//배열값의 합
	//c는 정적배열
	/*int sum = 0;
	int arr[] = {2,5,7,40,39};
	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++) {
		sum+=arr[i];
		
	}printf("합계:%d", sum);*/


	//int arr[5],sum=0;
	//int size = sizeof(arr) / sizeof(int);

	////입력받기
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]정수를 입력하세요?",i+1);
	//	scanf("%d", &arr[i]);
	//}
	////출력하기
	//for (int i= 0; i < size; i++) {
	//	printf("%d %p\n", arr[i],&arr[i]); //%p 주소
	//}
	////합계구하기
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];

	//}printf("합계:%d", sum);
	
	//실습)반학생의 점수 입력받아 합계/평균/검색
	/*int arr[2], sum = 0;
	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++) {
		printf("%d번 점수:", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("--------------------\n");
	for (int i = 0; i < size; i++) {
		sum += arr[i];
		printf("%d번 점수는 %d\n",i+1,arr[i]);

	}	printf("--------------------\n");
	printf("합계:%d\n", sum);printf("평균:%.f\n", (double)sum /size);*/
	
	//검색
	/*int no;
	char quit;*/ //종료변수
	/*printf("검색번호?");
	scanf("%d", &no);
	printf("점수는 %d\n", arr[no-1]);*/
	//while문
	//while (1)
	//{
	//	printf("검색번호?");
	//	scanf("%d", &no);
	//	getchar(); //엔터처리
	//	//잘못된 번호 처리
	//	if (no<1 || no>size) {
	//		printf("잘못된 번호\n");
	//		continue; //계속진행
	//	}
	//	printf("점수는 %d\n", arr[no - 1]);
	//	printf("--------------------\n");
	//	printf("종료(q)");
	//	scanf("%c", &quit);
	//	if (quit == 'q') break;
	//}

	//do ~ while문
	//do {
	//		printf("검색번호?");
	//		scanf("%d", &no);
	//		getchar(); //엔터처리
	//		//잘못된 번호 처리
	//		if (no<1 || no>size) {
	//			printf("잘못된 번호\n");
	//			continue; //계속진행
	//		}
	//		printf("점수는 %d\n", arr[no - 1]);
	//		printf("--------------------\n");
	//		printf("종료(q)");
	//		scanf("%c", &quit);
	//		
	//} while (quit != 'q');
	
	//피보나치의 수열 구하기
	//0 1 2 3 5 8 13 .....
	

//	int fibo[20];
//	fibo[0] = 0; fibo[1] = 1;
//	for (int i = 2; i < 20; i++) {
//		fibo[i - 2] + fibo[i - 1];
//
//	}
//	//출력
//	for (int i= 0; i < 20; i++) {
//		printf("%d\n", fibo[i]);
//	}
//	return 0;
//}