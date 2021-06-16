/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

void perm(int*,int,int);
void swap(int*,int,int);
void print(int*,int);
void copy(int*,int*,int);

int main()
{
	int N;
	scanf("%d",&N);
	int arr[N];
	for(int i = 0 ; i<N ; i++)
	{
		arr[i] = i+1;
	}
	perm(arr,0,N);
	return 0;
}

void perm(int* num,int i,int N)
{
	if(i<N)
	{
		int j;
		for(j = i ; j <N ; j++)
		{
			int to[N];
			copy(num,to,N);
			swap(to,i,j);
			perm(to,i+1,N);
		}
	}
	else
	{
		print(num,N);
	}
}

void swap(int* num,int i,int j)
{
	int temp = num[j];
	int k;
	for(k=j ; k>i ; k--)
	{
		num[k] = num[k-1];
	}	
	num[i] = temp;
} 

void copy (int* num,int* to,int N)
{
	for(int i = 0 ; i<N ; i++)
	{
		to[i] = num[i];
	}
}

void print(int* num,int N)
{
	for(int i = 0 ; i<N ; i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");
}
