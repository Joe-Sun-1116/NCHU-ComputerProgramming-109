/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
# define MAX 100

int* compare(int*, int);
int main()
{
	int N = 0;
	int arr[MAX] = {0};
	scanf("%d",&N);
	for(int i = 0 ; i<N ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",*compare(arr,N));

}

int* compare(int* arr,int N)
{
	int maxnum = arr[0];
	int p = 0;
	
	for(int i = 0 ; i < N ; i++){
		if(arr[i] > maxnum)
		{	
			maxnum = arr[i];
			p = i;
		}
	}
	return arr+p;			
}

