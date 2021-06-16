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
	int mon,day,year;
	printf("Please type in the date in the form mm/dd/yyyy:");
	scanf("%d/%d/%d",&day,&mon,&year);
	printf("you entered the date:%d%d%d",year,day,mon);
	
	return 0;
}
