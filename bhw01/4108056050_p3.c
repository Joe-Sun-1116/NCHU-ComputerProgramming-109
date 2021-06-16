/*
* 系級：資工二 
* 學號：4108056050
* 姓名：孫禾洵 
* 聯絡電子郵件：a0927554266@gmail.com
*/
#include<stdio.h>
#include<stdlib.h>

int main()									//此程式為雞兔數目 
{
	int chi;
	int rab;
	int n,m;								//雞加兔=n   總腿=m 
	scanf("%d %d",&n,&m);
	chi = (4*n-m)/2	;						//雞的數量
	rab = n-chi; 							//兔的數量 
	
	if(chi>=0 && rab>=0 && m%2==0)
	printf("%d %d",rab,chi);
	else
	printf("No solution.");
	
	return 0;
}
