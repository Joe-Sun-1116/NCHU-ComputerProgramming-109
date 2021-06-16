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
	int *index;
	int SIZE = 1000, len = 0, j = 0;
	int vowelindex;
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
	
	index = (int*)malloc(SIZE*sizeof(int));
	
	for(int i = 0 ; i<len ; i++)
	{
		switch(a[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			
			index[j] = i;
			j++;
			break;
			
			default:break;
		}
	}
	
	vowelindex = j;
	
	for(int i = 0 ; i<vowelindex/2 ; i++)
	{
		char temp;
		temp = a[index[i]];
		a[index[i]] = a[index[vowelindex-i-1]];
		a[index[vowelindex-i-1]] = temp;
	}
	
	for(int i = 0 ; i<len ; i++)
		printf("%c",a[i]);
	
	free(a);
	free(index);
	
	return 0;
}
	
	

