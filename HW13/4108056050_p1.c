/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>

int main()
{
	int N;
	int number;
	int j,temp;
	
	scanf("%d",&N);
	
	for(int i = 0 ; i<N ; i++)
	{
		scanf("%d",&number);
		
		int count[10] = {0};
		
		for(int i = 1 ; i<=number ; i++)
		{	
			//printf("%d",i);
			j = i;
			while(j)
			{
				temp = j % 10;
				count[temp]++;
				j/=10;
			}
		}
		
		for(int i = 0 ; i<10 ; i++)
		{
			printf("%d ",count[i]);
		}
		printf("\n");
	}
	return 0;
} 
