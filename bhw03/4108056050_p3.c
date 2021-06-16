/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#define MAX 10000001

int Prime[MAX] = {0};

int main()
{
	int N = 0, count = 0;
	scanf("%d",&N);
	
	Prime[0] = 1;
	Prime[1] = 1;
	
	for(long long int i = 2 ; i<MAX ; i++)
	{
		if(!Prime[i])
			for(long long int j = i*i ; j<MAX ; j+=i)
				Prime[j] = 1;
	}
	for(long long int i = 0 ; i<N ; i++)
	{
		if(!Prime[i])
			count++;
	}
	printf("%d",count);
	
	return 0;
} 
