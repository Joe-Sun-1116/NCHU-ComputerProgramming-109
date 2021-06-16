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
	int c;												//輸入糖果數量 
	printf("Please give the number of candy: ");
	scanf("%d",&c);
	printf("Can be packed into %d packs, and %d candies left.",c/100,c%100);
	
	return 0;
}
