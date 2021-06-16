/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>

void bubble_opt(int a[],int);


int main()
{
	int N;
	int count = 0;
	int number;
	int a[50] = {0};
	
	scanf("%d",&N);
	
	for(int i = 0 ; i<N ; i++)
	{
		scanf("%d",&number);
		
		for(int i = 0 ; i<number ; i++)
		{
			scanf("%d",&a[i]);
		}
		
		int temp;
		
		int flag= 0 ;

		for (int i= 0; i< (number-1) && (! flag); i++)
		{
			flag= 1 ; 
			for (int j=0; j < (number- 1)-i ; j++)
			{
				if (a[j]> a[j+1])
				{
					temp= a[j];
					a[j]= a[j+1];				
					a[j+1]= temp;
					flag= 0 ; 
					count++;
				}
			} 
		} 
		printf("%d",count);	
	}
}

