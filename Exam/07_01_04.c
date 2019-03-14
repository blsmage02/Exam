/*#include <stdio.h>

int main()
{
	int data1 = 5, data2 = 3;

	int result1 = 0 || 1;	
	//OR연산자 0과 1을 OR연산하면 1이 참이라서 참.
	int result2 = 3 && -1;
	//AND연산자 3과 -1을 AND 연산하면 3도 참 -1도 참이기에 둘 다 참.
	int result3 = data1 == 3 || data2 == 3;
	//OR연산자 data1과 3을 비교하면 거짓. data2와 3을 비교하면 참. OR연산자 이기때문에 둘 중 하나가 참이면 참
	int result4 = data1 == 3 && data2 == 3;
	//AND연산자 data1과 3을 비교하면 data1이 5라 거짓. 뒤에 data2연산은 참이지만 실행하지 않음.
	int result5 = !data1;
	//NOT연산자 result5에 data1의 값 대입하면 참. 참에 NOT연산자를 하면 거짓

	printf("0 || 1 : %d\n", result1);
	printf("3 && -1 : %d\n", result2);
	printf("data1 == 3 || data2 == 3 : %d\n", result3);
	printf("data1 == 3 && data2 == 3 : %d\n", result4);
}
*/