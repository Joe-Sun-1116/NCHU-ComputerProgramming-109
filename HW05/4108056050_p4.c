/*
* 系級：資工二 
* 學號：4108056050
* 姓名：孫禾洵 
* 聯絡電子郵件：a0927554266@gmail.com
*/
#include<stdio.h>

int main()
{
	int i,count;
	char cha;
	for(i;;)
	{
		scanf("%c",&cha);
		if(cha == 'a') count++;
		if(cha == 'e') count++;
		if(cha == 'i') count++;
		if(cha == 'o') count++;
		if(cha == 'u') count++;
		if(cha == 'A') count++;
		if(cha == 'E') count++;
		if(cha == 'I') count++;
		if(cha == 'O') count++;
		if(cha == 'U') count++;
		if(cha == '\n') break ;
	}
	printf("%d",count);
}
