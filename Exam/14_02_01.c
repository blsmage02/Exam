/*#include <stdio.h>

int main()
{
	int input_data;
	
	input_data = getchar();		//표준 입력 함수를 사용하여 문자를 한개 입력 받음
	
	printf("input : %c\n", input_data);
}
/*
getchar 함수는 int형식으로 데이터를 반환한다.
우리가 일반적으로 사용하는 입력 문자들은 대부분 1바이트 정보를 가지고 있기 때문에 특수한 프로그램을 만들지 않는 이상 1바이트만 사용해도 충분하다.
그러므로 getchar함수의 반환값을 char형으로 받아 사용해도 문제가 생기지 않는다.
*/