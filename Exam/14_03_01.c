/*#include <stdio.h>

int main()
{
	int pos_num = 100;		//pos_num�� �� �ڸ����� ���� ����
	int num = 0;			//num�� ������ ��ȯ�� ���ڸ� ������ ����
	int i;
	int temp_num;

	char num_string[4] = "123";		//������ ��ȯ�� ���ڿ�

	for (i = 0; i < 3; i++)
	{
		temp_num = num_string[i] - '0';		//�迭�� �� �׸��� ���ڿ��� ������ ������
		num = num + temp_num * pos_num;		//����ȭ�� ���ڿ� �ڸ����� �ش��ϴ� ���ڸ� ���ؼ� �ջ���
		pos_num = pos_num / 10;				//���� �ڸ����� �����ϱ� ���� 10�� ���� 100 > 10 > 1
	}

	printf("%s -> %d\n", num_string, num);
}
*/