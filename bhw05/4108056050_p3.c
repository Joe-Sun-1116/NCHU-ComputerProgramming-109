/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10001

int main()
{
	char str[MAX];
	int move = 0;
	
	scanf("%d",&move);
	scanf("%s",str);
	
	int len = strlen(str);
	
	for(int i = 0 ; i<len ; i++)
	{
		str[i] += move;
		
		if(str[i] > 'Z')
			str[i] -= 26;
		
		printf("%c",str[i]);
	}
	
	return 0;
}
