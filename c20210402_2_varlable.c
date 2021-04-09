#include <stdio.h>

int main() {
	//정수형 변수명을 선언
	/*int a;*/
	//초기화
	/*a = 10;
	printf("%d\n", a);*/

	//실수형 변수형을 선언     //float 와 double 차이는 정밀도
	//float f; //4byte     //소수점 6자리
	//double d; //8byte    //소수점 6자리 이상
	//f = 3.14424232324225252553; //초기화
	//d = 3.14424232324225252553; //초기화
	//printf("%.30f\n", f);
	//printf("%.30f\n", d);

	//문자형
	//선언과 동시에 초기화
	/*char c = 'a';
	printf("문자는 %c %d\n", c,c);*/

	//데이터형의 바이트수
	/*int a = 100;
	printf("정수형 : %d\n", sizeof(a));
	float f = 3.14;
	double d = 3.14;
	printf("실수형 : %d\n", sizeof(f));
	printf("실수형 : %d\n", sizeof(d));
	char c = 'A';
	printf("char형: %d\n", sizeof(c));*/

	//문자열
	//배열의 이름은 주소를 가지고 있다:상수
	//배열의 크기는 문자열의 크기 +1
	//선언과 동시에 초기화 시에는 배열의 크기 생략가능
	char c[6]="hello"; //nul문자를 마지막에 추가가 된다
	//c="hello";//상수기때문에 불가

	printf("문자열:%s 크기:%d\n", c,sizeof(c));
	printf("%c\n", c[0]);

	

	return 0;

}