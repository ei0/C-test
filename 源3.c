//1000��2000�������ж�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>

int main()
{
	int n;
	printf("���������\n");
	scanf ("%d",&n);
	if (n<1000 || n>2000)
		printf("ֻ�ж�1000�굽2000��\n");
	else if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
	{
		printf("������\n");
	}
	 else
	{
		printf("��������\n");
	}
	system("pause");
	return 0;
}