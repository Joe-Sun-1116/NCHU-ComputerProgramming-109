/*
* 系級：資工二 
* 學號：4108056050
* 姓名：孫禾洵 
* 聯絡電子郵件：a0927554266@gmail.com
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float x;
	float y;
	printf("Please type in x: ");
	scanf("%f",&x); 
	fflush(stdin);
	printf("Please type in y: ");
	scanf("%f",&y);
	printf("Result 1 = %.2f\n",pow(y,2)+5*y+8);
	printf("Result 2 = %.2f\n",pow(x,2)+5*x*y+y);
	printf("Result 3 = %.2f\n",pow(x,2)*y+5*y-4/(x+y+1));
	
	
}
