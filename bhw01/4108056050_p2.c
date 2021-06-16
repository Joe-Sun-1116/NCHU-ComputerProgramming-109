/*
* 系級：資工二 
* 學號：4108056050
* 姓名：孫禾洵 
* 聯絡電子郵件：a0927554266@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;							//使用者輸入的三個數字
	int num;							//輸入的三位數 
	int temp;							//暫存變數 
	printf("請輸入一個三位數字:");
	scanf("%d",&num);
	a = num/100;						//根據三位數取出三個數字 
	b = (num-a*100)/10;
	c = num-(a*100+b*10);
	
	if(a>b){
		temp = a;
		a = b;
		b = temp;
	} 
	if(a>c){
		temp = a;
		a = c;
		c = temp;
	} 
	if(b>c){
		temp = c;
		c = b;
		b = temp;
	} 
	
	if(a != 0)
	printf("%d%d%d",a,b,c);
	else if(b != 0)
	printf("%d%d%d",b,a,c);
	else if(c != 0)
	printf("%d%d%d",c,a,b);
	
	
	return 0;
}
