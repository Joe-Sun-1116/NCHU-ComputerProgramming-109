/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

struct array
{
	int data[SIZE];
};

int main(void)
{
	struct array arr1, arr2;
	
	int N;
	scanf("%d",&N);
	
	for(int  i = 0 ; i<N ; i++)
	{
		scanf("%d",&arr1.data[i]);
	}
	
	fflush(stdin);
	
	for(int  i = 0 ; i<N ; i++)
	{
		scanf("%d",&arr2.data[i]);
	}
	
	struct array arr;
	
	for(int  i = 0 ; i<N ; i++)
	{
		arr.data[i] = arr1.data[i] + arr2.data[i];
		printf("%d ",arr.data[i]);
	}
	
	return 0;
}

