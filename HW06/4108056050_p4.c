/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
long long int poly(long long int,long long int,int);

int main()
{
	long long int x=0, pow=0,i=0;
	long long int sum=0;
	int coe = 0;
	scanf("%lld %lld",&x ,&pow);
	
	while(pow>=0){
		scanf("%d",&coe);
		sum+=poly(x,pow,coe);
		pow--;
	}
	
	printf("%lld\n",sum);
	
	return 0;
}

long long int poly(long long int a,long long int b,int coe)
{
	if(b!=0){
		long long int base=a;
		for(long long int i=1 ; i<b ; i++)
			base*=a;
		return base*coe;
	}
	else
		return coe;
}
