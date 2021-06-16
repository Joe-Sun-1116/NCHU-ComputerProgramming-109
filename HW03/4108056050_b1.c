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
	int year;
	printf("Year:");
	scanf("%d",&year);
	
	if(year%4==0 && year%100 != 0)
	printf("Leap year.");
	else if(year%400==0)
	printf("Leap year.");
	else
	printf("Common year.");
	
	return 0 ;
} 
