/*
#include <stdio.h>

int main()
{

	char data[5] = { 1,2,3,4,5 };
	int result = 0;	//�ջ꿡 ����� result ������ 0���� �ʱ�ȭ��
	int i;
	char *p = data;	//data�迭�� ���� ��ġ�� ������ ���� p�� ������

	for (i = 1; i <= 5; i++)
	{
		result = result + *p;	//������ ���� p�� ����Ű�� ����� ���� result�� ����
		p++;					//data�迭�� ���� �׸����� �ּҸ� �̵� data[0] > data[1]
	}
	printf("data �迭�� �� ����� ���� %d�Դϴ�\n", result);
	

}
//*p++��� ����ص� ����
*/