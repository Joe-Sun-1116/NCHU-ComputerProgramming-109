/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#define MAX 100

void goal (int*,int*,int);
int main()
{
	int num;
	int arr[MAX] = {0};
	int arri[MAX] = {0};
	
	scanf("%d",&num);
	for(int i = 0 ; i < num ; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	goal (arr,arri,num);
	for(int i = 0 ; i < num ; i++)
	{
		printf("%d ",arri[i]);
	} 
	
	return 0;
}

void goal(int* arr,int* arri,int num)
{
	for(int i = 0 ; i < num ; i++)
	{
		arri[i] = arr[num-i-1];	
	} 
} 
