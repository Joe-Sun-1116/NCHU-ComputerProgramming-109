/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>

int main()
{
	FILE *F;
	char name[501];
	scanf("%s",name);
	getchar();
	char c;
	
	F = fopen(name,"w");
	
	scanf("%c",&c);
	while(c != '\n')
	{
		fprintf(F,"%c",c);
		scanf("%c",&c);
	}
	
	fclose(F);
	return 0;
}
