/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
int main(){
	int a,b,count=0;
	int arr[10]={0};
	scanf("%d %d",&a,&b);
	while(a>b){
		arr[count]=a%b;
		count++;
		a=a/b;
	}
	arr[count]=a;
	
	for(int i=0 ; i<=count ;i++)
	printf("%d",arr[count-i]);
	
	return 0;
}
