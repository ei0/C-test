#include <stdio.h>
#include <stdlib.h>
int ________main(){
	//将水仙花数扩展到n
	//回文数  12321
	//1.提出每一位数
	//数组/逆序
	//完成[a,b]遍历  a,b可为数字可为数组
	//for(i = n;i;i /= 10)
    //其中 i%10完成了对n每一位的遍历
	
	
	
	//回文数判断(逆序)(任意进制下x)
	//int n, i , sum = 0, x ; 
	//scanf("%d,&n);
	//printf(请输入数(任意进制x));
	
	//for (i = n; i; i /= x){       //取位
	//	printf("%d",i % x);
	//	sum = sum * x + i % x;
	//}当把10换成x则为在x进制下的逆序
	
	//printf("%d",sum);
	//if(sum == n){
	//printf("是回文数");}
	//else{
    //printf("不是回文数");  }思考:负数
	
	
	
	//pow(a,b)可求出a的b次方


	int i , j;
	int tmp[10] = {0};
	int count , sum;

	for (i = 0; i < 100000000; i++){
		for (j = 1; j; j /= 10){
			tmp[count] = j % 10;
			count++;
		}
		for (j = 1; j <= count; j++){
			sum += pow( tmp[j - 1], count);
           }
		if (sum == i){
			printf("%d",sum);

		}
		count = sum = 0;
	}



	system("pause");
	return 0;
}