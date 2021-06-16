/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#define MAX 100

int main(){
	int num[MAX]={0};
	int count=0;
	int count2=0;
	
	scanf("%d",&count);
	
	for(int i=0 ; i<count ; i++){
		int number;
		scanf("%d",&number);
		num[number]++;
	}
	
	for(int i=0 ; i<99 ; i++)
	{
		if (num[i]!=0)
		count2++;
	}
	printf("\n%d",count2);
	return 0;
}
	
	
