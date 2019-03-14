/*#include <stdio.h>

int GetData(void *p_data, char type)
{
	int result = 0;
	//type 변수에 저장된 값을 기준으로 형 변환을 다르게함
	if (type == 1) result = *(char *)p_data;
	else if(type==2) result= *(short *)p_data;
	else if(type==4)result= *(int *)p_data;
	return result;
}

int main()
{
	int data = 0x12345678;
	//data 변수에서 2바이트 크기만 출력함 
	printf("%X\n", GetData(&data,2));

}
*/
/*
int형으로 선언한 변수 data에 값 0x12345678이 저장되어 있습니다. data변수에 적정값을 대입하지 않고 short *형 포인터를 선언하여
data변수의 값을 0x12340412로 변경하는 코드 작성
*/