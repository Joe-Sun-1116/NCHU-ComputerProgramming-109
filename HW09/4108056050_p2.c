/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
void frac(int,int,int*,int*);
int main()
{
	int a, b;
	scanf("%d/%d",&a,&b);
	int* ap = &a,bp = &b;
	frac(a,b,ap,bp);
	printf("%d/%d",a,b);
	
	return 0;
}

void frac(int a,int b,int* ap,int* bp)
{
	int i = a;
	int j = b;
	int k = 0;
	while(b!=0)
	{
		int r = a % b;
		a = b;
		b = r;
	}

	*ap = *ap/a;
	*bp = *bp/a;
}
