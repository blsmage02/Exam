/*#include <stdio.h>

int GetData(void *p_data, char type)
{
	int result = 0;
	//type ������ ����� ���� �������� �� ��ȯ�� �ٸ�����
	if (type == 1) result = *(char *)p_data;
	else if(type==2) result= *(short *)p_data;
	else if(type==4)result= *(int *)p_data;
	return result;
}

int main()
{
	int data = 0x12345678;
	//data �������� 2����Ʈ ũ�⸸ ����� 
	printf("%X\n", GetData(&data,2));

}
*/
/*
int������ ������ ���� data�� �� 0x12345678�� ����Ǿ� �ֽ��ϴ�. data������ �������� �������� �ʰ� short *�� �����͸� �����Ͽ�
data������ ���� 0x12340412�� �����ϴ� �ڵ� �ۼ�
*/