/*#include <stdio.h>

int main()
{
	int num = 0;
	int count = 0;
	char num_string[4] = "123";

	while (num_string[count] != 0)						//num_string 값이 0이 나올때까지 반복, 0일시 종료
	{
		num = num * 10 + (num_string[count] - '0');		// 0 * 10 + ( '1' - '0' ) = 1 -> 1 * 10 + ('2' - '0') -> 12 ~~~~
		count++;										
	}
	printf("%s -> %d\n", num_string, num);
}
*/