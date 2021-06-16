/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

struct data
{
	char alphabet;
	int number;
};

void bubble_sort(struct data arr[],int N)
{
	for (int i = 0; i < N; ++i) 
	{
    	for (int j = i; j < N-1; ++j) 
		{
      		if (arr[j].number > arr[j+1].number) 
	  		{
        		struct data temp = arr[j];
        		arr[j] = arr[j+1];
        		arr[j+1] = temp;
      		}
    	}
   	}
}
	
int main(void)
{
	int N;
	scanf("%d",&N);
	
	struct data arr[N];
	
	for(int  i = 0 ; i<N ; i++)
	{
		fflush(stdin);
		scanf("%c %d",&arr[i].alphabet,&arr[i].number);
	}
	
	bubble_sort(arr,N);
	
	for(int  i = 0 ; i<N ; i++)
	{
		printf("%c %d\n",arr[i].alphabet,arr[i].number);
	}
	
	return 0;
}
