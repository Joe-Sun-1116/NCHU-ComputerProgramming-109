/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>

int main()
{
	char c;
	int i = 0;
	FILE *F,*G,*H;
	char name[501];
	scanf("%s",name);
	getchar();
	F = fopen(name,"r");
	scanf("%s",name);
	getchar();
	G = fopen(name,"r");
	scanf("%s",name);
	getchar();
	H = fopen(name,"w");	
	
	int index[26] = {0};
	
	c = fgetc(F);
	while(c != '\n')
	{
		i = c - 'a';
		index[i]++;
		c = fgetc(F);	
	}
	
	c = fgetc(G);
	while(c != '\n')
	{
		i = c - 'a';
		index[i]++;
		c = fgetc(G);
	}
	
	for(int i = 0 ; i<26 ; i++)
	{
		if (index[i] != 0)
		{
			for(int j = 0 ; j<index[i] ; j++)
				fprintf(H,"%c",'a'+i);
		}
	}
	
	fclose(F);
	fclose(G);
	fclose(H);
	
	return 0 ;	
}
