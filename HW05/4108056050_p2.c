/*
* 系級：資工二 
* 學號：4108056050
* 姓名：孫禾洵 
* 聯絡電子郵件：a0927554266@gmail.com
*/
#include<stdio.h>

int gcd(int m, int n)
{
    while(n != 0)
	{ 
        int r = m % n; 
        m = n; 
        n = r; 
    } 
    return m;
}

int main()
{
	int a,b;
	int gcdnum;
	scanf("%d/%d",&a,&b);
	gcdnum = gcd(a,b);
	printf("%d/%d",a/gcdnum,b/gcdnum);
	return 0;
}
