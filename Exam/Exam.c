#include <stdio.h>
/*
int main()
{

	printf("hello");
}

	/*
	q1.
	char data[2 * 1024 * 1024];
	정적할당으로 저장되는 공간의 크기를 초과해서

	q2.
	short data[8];
	short *data = (short *)malloc(sizeof(short)*8);

	q3.
	void *

	q4.
	지역 변수는 Stack 영역에 할당
	malloc 함수로 할당하는 메모리는 Heap 영역에 할당

	q5.
	x,	x,	x


/*
int형으로 선언한 변수 data에 값 0x12345678이 저장되어 있습니다. data변수에 적정값을 대입하지 않고 short *형 포인터를 선언하여
data변수의 값을 0x12340412로 변경하는 코드 작성
*/

/*
	int const *p = const 키워드가 변수 앞에 붙은 경우는 포인터가 가지고 있는 주소를 변경할 수 없음
	const int *p = const 키워드가 자료형 앞에 붙은 경우는 포인터가 가리키는 대상의 값을 변경할 수 없음
	
	const int const *p = const 키워드가 자료형, 변수 둘 다 붙은 경우는 포인터가 가진 주소와 포인터가 가리키는 대상의 값을 변경할 수 없음 

	포인터 변수의 주소 연산시 자료형의 크기에따라 저장된 주소 값이 다름.

	아스키코드 순서대로 출력 할 때 %c로 출력하면서 값 1씩 증가

*/