/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#define MAX 101

struct str
{
	char str1[MAX];
	char str2[MAX];	
};

int main()
{
	struct str s; 
	int N;
	
	scanf("%d",&N);
	scanf("%s %s",s.str1,s.str2);
	
	for(int i = 0 ; i<N ; i++)
	{
		printf("%c%c",s.str1[i],s.str2[i]);
	}
	
	return 0;
}
