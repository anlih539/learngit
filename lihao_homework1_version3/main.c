/*************************************************

�ļ��������������10��100���ڵ������������ʾ

Ժ    ϵ����������ѧԺ

��    �ߣ����

ѧ    �ţ�31903132

**************************************************/

#include "Generate.h"
#include "Display.h"
#include "Sort.h"

int main(void)
{
	int RandArray[SIZE], LengthOfArray;
	Generate(RandArray);//�����������
	LengthOfArray = sizeof(RandArray) / sizeof(int);//��ȡ���鳤��
	printf("����ǰ��");
	Display(RandArray, LengthOfArray);//���δ�������������
	Sort(RandArray, LengthOfArray);//������Ԫ�ؽ�������
	printf("�����");
	Display(RandArray, LengthOfArray);//�������������

	return 0;
}