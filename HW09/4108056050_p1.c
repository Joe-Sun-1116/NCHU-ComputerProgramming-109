/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>

void swap(int* , int*);
int main()
{
	int num1, num2;
	scanf("%d %d",&num1, &num2);
	int* p1 = &num1, p2 = &num2;
	swap(p1,p2);
	printf("%d %d",num1 , num2);
	
	return 0;
}

void swap(int* p1 , int* p2)
{
	int temp = *p2;
	*p2 = *p1;
	*p1 = temp;
}
