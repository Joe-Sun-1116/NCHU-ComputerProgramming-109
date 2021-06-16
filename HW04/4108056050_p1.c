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
	int h,n;
	int i;					//迴圈變量 
	fflush(stdin);
	scanf("%d %d",&h,&n);
	float h1=h,sum=h;
	
	if(n==1)
	{
		printf("%.3f",h1);
	}
	else
	{
		for(i=1 ; i<+n ; ++i)
		{
			h1 = h1/2;
			sum+=(h1*2);
		}
		h1/=2;
		printf("%.3f %.3f",sum,h1);		
	}
	
	return 0;
}
