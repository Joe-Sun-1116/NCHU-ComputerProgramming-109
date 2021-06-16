/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char str[3000];
	int flag = 1;
	while(gets(str))
	{
		int len = strlen(str);

		for (int i = 0; i < len; i++)
    	{
        	if (str[i] >= 'A' && str[i] <= 'Z')
        	{
            	str[i] = str[i] + 32;
            	printf("%c", str[i]);
        	}
        	else if (str[i] >= 'a' && str[i] <= 'z')
        	{
            	str[i] = str[i] - 32;
            	printf("%c", str[i]);
        	}
        	else
        	{
            	printf("%c", str[i]);
        	}
		}
		printf("\n");	
	}
	return 0;
}
