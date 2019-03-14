/*
#include <stdio.h>

int main()
{

	char data[5] = { 1,2,3,4,5 };
	int result = 0;	//합산에 사용할 result 변수는 0으로 초기화함
	int i;
	char *p = data;	//data배열의 시작 위치를 포인터 변수 p에 저장함

	for (i = 1; i <= 5; i++)
	{
		result = result + *p;	//포인터 변수 p가 가리키는 대상의 값을 result에 더함
		p++;					//data배열의 다음 항목으로 주소를 이동 data[0] > data[1]
	}
	printf("data 배열의 각 요소의 합은 %d입니다\n", result);
	

}
//*p++라고 사용해도 가능
*/