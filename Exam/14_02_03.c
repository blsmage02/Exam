/*#include <stdio.h>

int main()
{
	int input_data = getchar();		//한 개의 문자 입력 받음
	rewind(stdin);					//표준 입력 버퍼에 있는 모든 입력 값을 제거함
	printf("first input : %c\n", input_data);

	input_data = getchar();
	rewind(stdin);
	printf("second input : %c\n", input_data);

}
/*
표준 입력 버퍼에 입력된 키 중에서 첫 번째 값만 받아들이고 rewind 함수를 사용해서 입력 버퍼에 있는 나머지 입력 값을 모두 제거
*/