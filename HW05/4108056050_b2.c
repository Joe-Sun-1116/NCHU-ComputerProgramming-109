/*
* 系級：資工二 
* 學號：4108056050
* 姓名：孫禾洵 
* 聯絡電子郵件：a0927554266@gmail.com
*/
#include<stdio.h>
int j,i=1;
double min,e=1,add=1;
int main()
{
	scanf("%lf",&min);
	
	while(add>=min)
	{
		add=1;
		for(j=1;j<=i;j++)
		{
			add /=j;
		}
		e+=add;
		i++;
	}
	
	printf("%.12f",e);
}
