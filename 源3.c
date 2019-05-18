//1000到2000的闰年判断
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>

int main()
{
	int n;
	printf("请输入年份\n");
	scanf ("%d",&n);
	if (n<1000 || n>2000)
		printf("只判断1000年到2000年\n");
	else if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
	{
		printf("是闰年\n");
	}
	 else
	{
		printf("不是闰年\n");
	}
	system("pause");
	return 0;
}