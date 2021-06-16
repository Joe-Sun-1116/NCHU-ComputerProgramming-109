/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N;
	scanf("%d",&N);
	
	struct data
	{
		char alphabet;
		int number;
	};
	
	struct data arr[N];
	
	for(int  i = 0 ; i<N ; i++)
	{
		fflush(stdin);
		scanf("%c %d",&arr[i].alphabet,&arr[i].number);
	}
	for(int i = 0 ; i<N ; i++)
		printf("%c %d\n",arr[i].alphabet,arr[i].number);
	
	return 0;
} 
