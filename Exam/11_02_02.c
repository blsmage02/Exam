/*#include <stdio.h>

int result;	//전역변수의 초기화 값이 없으면 0으로 초기화 된다.


void Sum(int data1, int data2)
{
	int result;		//지역변수
	result = data1 + data2;		//지역변수의 우선순위가 높기 때문에 연산 결과 값은 지역변수 result에 저장된다.
}
int main()
{
	Sum(5, 3);
	printf("5 + 3 = %d\n", result);		//전역변수 result의 값 = 0
}
*/