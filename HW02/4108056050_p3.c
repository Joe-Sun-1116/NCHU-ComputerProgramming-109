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
	int c ;										//輸入溫度 
	printf("Please type in degree Celcius: ");
	scanf("%d",&c);
	printf("The degrees Fahrenheit is: %.2f",c*9/5.0+32);
	
	return 0;
}
