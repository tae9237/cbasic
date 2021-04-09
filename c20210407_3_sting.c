#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //문자열 관련 함수
int main() {
	//문자
	/*char c;
	scanf("%c", &c);
	printf("문자:%c\n",c);*/

	//에코기능이 있다.
	//int c = getchar(); //문자입력 전용함수
	//printf("입력문자:%c %d\n", c,c);
	//putchar(c);//문자 출력 전용함수

	//getch(함수)
	/*char c = getch();
	printf("입력문자:");
	putchar(c);*/

	//비밀번호 입력하면 *가 출력
	/*char pw[5];
	printf("password:");
	for (int i = 0; i < 5; i++) {
		pw[i] = getch();
		putchar('*');
	}

	pw[4] = '\0';
	printf("\n비밀번호:%s\n", pw);*/

	//문자열
	//char s[] = "hello";
	//char s[6];//배열의 이름주소
	//scanf("%s", s);
	//printf("%s\n", s);


	//문자열 전용함수:공백처리가능
	/*char name[20];
	printf("이름은?");
	gets(name);
	printf("당신의이름은 "); puts(name);*/
	
	//문자열 전용함수
	//char name[10] = "hong";
	////name = "kim";
	//strcpy(name, "kim");
	//puts(name);

	//실습
	/*char c[17];
	printf("문자열을 입력하세요:");
	gets(c);
	printf("값은:"); puts(c);
	printf("주소:%p", c);*/
	



	return 0;
}