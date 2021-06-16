/*
* 系級：資工二 
* 學號：4108056050
* 姓名：孫禾洵 
* 聯絡電子郵件：a0927554266@gmail.com
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int count;
	int num;
	int evensum=0,oddsum=0,even=0,odd=0;
	fflush(stdin);
	scanf("%d",&count);
	for(i=1 ; i<=count ; i++)
	{
		scanf("%d",&num);
		if (num%2 == 0)
		{
			even += 1;
			evensum += num; 	
		}
		if (num%2 == 1)
		{
			odd += 1;
			oddsum += num; 	
		}
	}
	printf("%d %d %d %d",odd,oddsum,even,evensum);
	
	return 0;
	
}
