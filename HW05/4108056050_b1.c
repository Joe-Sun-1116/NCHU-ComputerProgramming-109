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
	int i,j,n;
	double e=0;
	scanf("%d",&n);
	if (n==1)
	printf("2.500000000000");
	else
	{
		for(i=1 ; i<=n ; i++)
		{	
			double add = 1;
			for(j=1 ; j<=i ; j++)
			{
				add /=j;
			}
			e+=add;
		}
		
	printf("%.12f",e+1);
	}
	return 0;	
}
