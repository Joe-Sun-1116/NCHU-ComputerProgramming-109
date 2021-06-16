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
	char arr[20][50];
	int count = 0;
	int maxlen = 0;
	int len[20];
	while(gets(arr[count]))
	{
		len[count] = strlen(arr[count]);
		
		if (strlen(arr[count]) > maxlen)
			maxlen = strlen(arr[count]);
		
		count++;
	}
	
	for(int i = 0 ; i<maxlen ; i++)
	{
		for(int j = 0 ; j<count ; j++)
		{
			if(i >= len[j])
				printf(" ");
			else
				printf("%c",arr[j][i]);
			
		}
		
		printf("\n");
	}
	return 0;
}
