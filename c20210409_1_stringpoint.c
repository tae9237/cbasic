#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//문자열의 포인터
	//char str[] = "happy";
	////str = "angry"; //str은 상수 변경물가
	//char* p = str;
	//printf("%s\n", p);

	//p = "python";
	//puts(p); //문자열전용함수

	//실습)이름을 입력받아 입력받고 출력
	//포인터르 이용

	char name[20];
	char* p = name;
	while (1) {
		printf("이름은?");
		gets_s(name, sizeof(name));
		if (name[0] == 'q') break;
		printf("%s님 환영합니다.\n",p);
		//puts(p);
		//printf("님 환영합니다.\n");
	}
	
	
	return 0;
}
