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
	int a,b,c,d;
	int max1,max2,min1,min2;
	printf("Enter four integers:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b)
	{
		max1 = a; 
		min1 = b;
	}
	else
	{ 
		max1 = b;
		min1 = a;
	}	
	if(c>d)
	{
		max2 = c;
		min2 = d;
	}
	else
	{
		max2 = d;
		min2 = c;
	}
	if(max1<max2)
	printf("Largest: %d\n",max2);
	else
	printf("Largest: %d\n",max1);
	if(min1>min2)
	printf("Smallest: %d\n",min2);
 	else
	printf("Smallest: %d\n",min1);	
	
	return 0;
}
