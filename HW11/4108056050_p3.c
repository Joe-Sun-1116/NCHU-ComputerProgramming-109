/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#define SIZE 100

struct array
{
	int size;
	int data[SIZE];
};

int main()
{
	struct array arr;
	scanf("%d",&arr.size);
	
	for(int i = 0 ; i<arr.size ; i++)
	{
		scanf("%d",&arr.data[i]);
	}
	
	for(int i = 0 ; i<arr.size ; i++)
	{
		printf("%d ",arr.data[i]);
	}
	
	return 0;
}
