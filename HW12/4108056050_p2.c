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
	F = fopen(name,"r");
	int a = 0,b = 0;
	
	while((fscanf(F,"%d %d",&a,&b)) != EOF)
	{
		printf("%d\n",a+b);
	}
	
	fclose(F);
	return 0;
}
