/*#include <stdio.h>
#include <string.h>

int main()
{
	int pos_num = 1;		//pos_num은 각 자릿수에 곱할 숫자
	int num = 0;			//num은 정수로 변환될 숫자를 저장할 변수
	int i;
	int count;

	char num_string[4] = "123";		//정수로 변환할 문자열

	count = strlen(num_string);		//문자열의 길이를 구해서 count변수에 저장하면 count에 3이 저장됨

	for (i = 0; i < count-1 ; i++)	//문자열의 길이보다 1만큼 작게 반복함
		pos_num = pos_num * 10;		//문자열 길이 값 만큼 x10

	for (i = 0; i < count; i++)
	{
		num = num + (num_string[i] - '0') * pos_num;		// 0 + ('1' - '0') * 
		pos_num = pos_num / 10;
	}

	printf("%s -> %d\n", num_string, num);
}
*/