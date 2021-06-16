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
	int num;                 		//使用者輸入之數字 
	
	printf("Enter a number:");
	scanf("%d",&num);
	if(num>=0 && num<=9)
	{
		printf("The number %d has 1 digits.\n",num);
	}
	if(num>=10 && num<=99)
	{
		printf("The number %d has 2 digits.\n",num);
	}
	if(num<=999 && num>=100)
	{
		printf("The number %d has 3 digits.\n",num);
	}
	
	if(num<=9999 && num>=1000)
	{
		printf("The number %d has 4 digits.\n",num);
	}
	
	return 0;
 } 
