/*#include <stdio.h>
#include <string.h>

int main()
{
	int pos_num = 1;		//pos_num�� �� �ڸ����� ���� ����
	int num = 0;			//num�� ������ ��ȯ�� ���ڸ� ������ ����
	int i;
	int count;

	char num_string[4] = "123";		//������ ��ȯ�� ���ڿ�

	count = strlen(num_string);		//���ڿ��� ���̸� ���ؼ� count������ �����ϸ� count�� 3�� �����

	for (i = 0; i < count-1 ; i++)	//���ڿ��� ���̺��� 1��ŭ �۰� �ݺ���
		pos_num = pos_num * 10;		//���ڿ� ���� �� ��ŭ x10

	for (i = 0; i < count; i++)
	{
		num = num + (num_string[i] - '0') * pos_num;		// 0 + ('1' - '0') * 
		pos_num = pos_num / 10;
	}

	printf("%s -> %d\n", num_string, num);
}
*/