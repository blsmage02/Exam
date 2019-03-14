#include <stdio.h>
#define MAX_COUNT 5		//최대 입력을 위해 상수 생성
/*
int main()
{
	int num[MAX_COUNT], count = 0, sum = 0, i;

	while (count < MAX_COUNT)	//최대 상수 값 만큼 입력받음
	{
		printf("숫자를 입력하세요 (9999를 누르면 종료) : ");
		scanf("%d", num + count);	//&num[count]와 같은 표현
		if (num[count] == 9999) break;		//9999 입력시 종료
		count++;	//입력된 횟수 계산
	}

	for (i = 0; i < count; i++)
	{
		if (i > 0)printf(" + ");
		printf("%d ", num[i]);
		sum = sum + num[i];
	}

	printf(" = %d \n", sum);
}
*/