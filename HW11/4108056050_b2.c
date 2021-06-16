/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#define MAX 200000

int main(void)
{
	int arr[MAX];
	int N, count=0;
	int k = 1;
	scanf("%d",&N);
	
	for(int i = 0 ; i<N ; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i = 0 ; i<N ; i++)
	{
		if(arr[i] != k)
			count++;
		else if(arr[i] == k)
			k++;
	}
	
	if(count == N)
		printf("-1");
	else
		printf("%d",count);
	
	return 0;
}
