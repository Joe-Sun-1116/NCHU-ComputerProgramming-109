/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#define MAX 101

void Reverse(int num[MAX],int);
void Bignum_add(int num1[MAX],int num2[MAX],int);

int main()
{
	int index1;
	int index2;
	int index;
	int num1[MAX] = {0};
	int num2[MAX] = {0};
	char numchar1[MAX];
	char numchar2[MAX];
	
	scanf("%d",&index1);
	scanf("%s",&numchar1);
	scanf("%d",&index2);
	scanf("%s",&numchar2);
	index = (index1 >= index2 ? index1 : index2);
	
	
	for(int i = 0 ; i<index1 ; i++)
	{
		num1[i] = numchar1[i] - '0' ;
	}
	
	for(int i = 0 ; i<index2 ; i++)
	{
		num2[i] = numchar2[i] - '0' ;
	}
	
	Reverse(num1,index1);
	Reverse(num2,index2);
	Bignum_add(num1,num2,index);
	
	return 0;
}

void Reverse(int num[MAX],int index)
{
	int temp = 0;
	for(int i = 0 ; i<index/2 ; i++)
	{
		temp = num[i];
		num[i] = num[index-i-1];
		num[index-i-1] = temp;
	}
}

void Bignum_add(int num1[MAX],int num2[MAX],int index)
{
	int sum[MAX] = {0};
	
	for(int i = 0 ; i<MAX ; i++)
	{
		sum[i] = num1[i] + num2[i];
	}
	
	for(int i = 0 ; i<MAX ; i++)
	{
		if(sum[i] > 10)
		{
			sum[i] = sum[i] % 10;
			sum[i+1] += 1;
		}
		else if(sum[i] == 10)
		{
			sum[i+1] += 1;
			sum[i] = 0;
		}
	}
	
	if(sum[index] != 0)
		index += 1;
	
	Reverse(sum,index);
	
	for(int i = 0 ; i<index ; i++)
		printf("%d",sum[i]);
}
