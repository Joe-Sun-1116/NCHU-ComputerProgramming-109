/*
* 系級：資工二 
* 學號：4108056050
* 姓名：孫禾洵 
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main()
{
	long int count = 0, num, a, c;
	scanf("%ld",&num);
	
	for(c=1 ; c<num ; c++)
	{
		for(a=1 ; a<=(long int)sqrt(num-c) ; a++)
		{
			if((num-c)%a==0 )
			count+=2;
			if(a*a == (num-c))
			count--;
		}
	}
	
	printf("%d",count);
	
	return 0;
}
