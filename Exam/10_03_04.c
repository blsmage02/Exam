/*#include <stdio.h>

unsigned char ModifyBit(unsigned char dest_data, unsigned char bit_num, char value)
{
	unsigned char mask;		//1����Ʈ ������ ��Ʈ �̵��� 0~7������ ����

	if (bit_num < 8) {
		mask = 0x01 << bit_num;							//bit_num��° ��Ʈ�� ���� �����ϴµ� ����� ���ڸ� ������

		if (value == 1) dest_data = dest_data | mask;	//1�� �����ϴ� ���
		else dest_data = dest_data & ~mask;				//0���� �����ϴ� ���
	}
	return dest_data;		//����� �� ��ȯ
}



int main()
{
	unsigned char lamp_state = 0x7F;	//16���� 0x7F�� 2���� 0111 1111
	
	printf("%X->", lamp_state);			//���� �� �� ���

	lamp_state = ModifyBit(lamp_state, 3, 0);	//lamp_state ������ 3��° ��Ʈ�� 0���� ����
	printf("%X->", lamp_state );

	lamp_state = ModifyBit(lamp_state, 3, 1);
	printf("%X\n", lamp_state);

}
*/