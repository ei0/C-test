#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int _main()
{
#if 0
	int a, b, i, min, max = 0;
	scanf("%d%d", &a, &b);

	min = a < b ? a : b;
	for (i = 2; i <= min; i++){
		if (a % i == 0 || b % i == 0){
			max = i;
		}

	}if (max == 0){
		printf("两个数互质\n");
	}
	else{
		printf("最大公约数为%d\n",max);
	}
#else
	int a, c, b;
	scanf("%d%d",&a,&b);
	while (c = a % b ){
		a = b;
		b = c;

	}
	if (b == 0){
		printf("两个数互质\n");
	}
	else{
		printf("最大公约数为%d\n", b);
	}


#endif
	system("pause");
	return 0;
}