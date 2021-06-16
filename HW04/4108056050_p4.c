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
	int a,b;
	int t;
	fflush(stdin);
	scanf("%d %d",&a,&b);
	if(a<b)
    {
        t=a;
		a=b;
		b=t;
	}
	while(a%b)
    {
        t=b;
        b=a%b;
        a=t;
	}
	if(b==1)
	printf("Coprime");
	else
	printf("%d",b);
	
	return 0;
}
