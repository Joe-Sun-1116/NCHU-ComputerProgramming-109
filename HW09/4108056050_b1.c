/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#define MAX 19

int main()
{
	int n;
	long long int num1,num2;
	
	scanf("%d",&n);
	fflush(stdin);
	scanf("%lld",&num1);
	n--;
	
	for(; n>0 ; n--)
	{
		scanf("%lld",&num2);
		num1*=num2;
	}
	if(num1 > 1000000000000000000)
		printf("-1");
 	else
 		printf("%lld",num1);
	
	return 0;
} 
