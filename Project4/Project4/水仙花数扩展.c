#include <stdio.h>
#include <stdlib.h>
int ________main(){
	//��ˮ�ɻ�����չ��n
	//������  12321
	//1.���ÿһλ��
	//����/����
	//���[a,b]����  a,b��Ϊ���ֿ�Ϊ����
	//for(i = n;i;i /= 10)
    //���� i%10����˶�nÿһλ�ı���
	
	
	
	//�������ж�(����)(���������x)
	//int n, i , sum = 0, x ; 
	//scanf("%d,&n);
	//printf(��������(�������x));
	
	//for (i = n; i; i /= x){       //ȡλ
	//	printf("%d",i % x);
	//	sum = sum * x + i % x;
	//}����10����x��Ϊ��x�����µ�����
	
	//printf("%d",sum);
	//if(sum == n){
	//printf("�ǻ�����");}
	//else{
    //printf("���ǻ�����");  }˼��:����
	
	
	
	//pow(a,b)�����a��b�η�


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