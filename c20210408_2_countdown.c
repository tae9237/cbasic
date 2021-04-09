#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//매개변수 : 카운트다운 초
//반환값 : 없음
//기능:카운트 다운을 출력
 
void c(int a) {
	for (int i = 5; i > -1; i--) {
		Sleep(1000); //1/1000초 단위
		printf("%d초\n", i);
	}
}

int main() {
	////카운트 다운
	////5초....발사
	//printf("카운트다운 시작\n");
	//for (int i = 5; i >-1; i--) {
	//	Sleep(1000); //1/1000초 단위
	//	printf("%d초\n", i);

	//}
	//printf("발사\n");

	printf("카운트다운시작\n");
	c(5);
	printf("발사\n");
	return 0;
}