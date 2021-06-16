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
	char *a,t;
	int SIZE = 1000, len = 0;
	a = (char*)malloc(sizeof(char)*SIZE);
	
	while(1)
	{
		scanf("%c",&t);
		
		if(t == '\n')
			break;
		if(len == SIZE)
		{
			SIZE*=2;
			char *b;
			b = (char*)malloc(sizeof(char)*SIZE);
			for(int j = 0 ; j<len ; j++)
				b[j] = a[j];
				
			free(a);
			a = b;
		}
		a[len] = t;
		len++;	
	}
	
	
	int count = 0 , Rnum = 0 , Lnum = 0;
	
	for(int i = 0 ; i<len ; i++)
	{
		//str[i] = *p;
		//p++;
		
		if(a[i] == 'L')
			Lnum++;
		else if(a[i] == 'R')
			Rnum++;
			
		if(Lnum == Rnum)
			count++;
	}
	
	if(Rnum != Lnum)
		printf("0");
	else
		printf("%d",count);
	
	free(a);
	return 0;	
} 
