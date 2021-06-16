/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
int recur(int);
int fac(int);


int main()
{
	/******第一種******/
	int n=0;
	int temp=1;
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++)
		temp*=i;
	
	printf("%d %d %d",temp,fac(n),recur(n));
	
	
	return 0;
}

int fac(int n)
{
	int temp=1;
	for(int i=1 ; i<=n ; i++)
		temp*=i;
	
	return temp;	
}



int recur(int n)
{
	if(n>0)
		return(recur(n-1)*n);
	else
		return 1;
}
