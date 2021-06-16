/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
int pascal(int,int);


int main()
{
	int R,C;
	scanf("%d %d",&R,&C);
	printf("%d",pascal(R,C));
	
	return 0;
}

int pascal(int r,int c)
{
	if(r==c || c==0)
		return 1;
	else
		return pascal(r-1,c-1)+pascal(r-1,c);
}
