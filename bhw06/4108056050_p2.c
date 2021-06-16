/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	
	for(int i = 1 ; i<N ; ++i)
	{
		int k = 0;
		
		for(int j = 1 ; j<N ; ++j)
			k = (k+i)%j;
		
		if(k == 11)
		{
			printf("%d",i);
			break;
		}	
	}
	
	return 0;
}
