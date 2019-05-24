#include <stdio.h>
#include <stdlib.h>
#if 0
void printArray(int a[], int n) {
	int i;
	for (i = 0; i < n; i++){
		printf("%d ",a[i]);
	}


}


int main(){
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int b[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, };
	int i, tmp;
	printArray(a, 10);
	printArray(b, 10);
	for (i = 0; i < 10; i++){
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}

	printArray(a, 10);
	printArray(b, 10);
#endif
#if 0
int main(){
	int i;
	double tmp = 1, sum = 0;
	for (i = 1; i <= 100; i++){
		tmp = 1.0 / i *(i % 2 ? 1 : -1);//变化
		sum += tmp;//统计
	}
	printf("%1f\n",sum);


	system("pause");
	return 0;}
#else
	int main(){
		int i, count = 0;
		for (i = 1; i <= 100; i++){
			if (i % 10 == 9){
				count++;
			}
			if (i / 10 == 9){
				count++;
			}
		}
		printf("共有%d个带9的数\n",count);
		system("pause");
		return 0;

	}
#endif
