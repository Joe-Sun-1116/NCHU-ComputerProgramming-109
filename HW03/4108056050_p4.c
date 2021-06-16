/*
* 系級：資工二 
* 學號：4108056050
* 姓名：孫禾洵 
* 聯絡電子郵件：a0927554266@gmail.com
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m1,d1,y1;
	int m2,d2,y2;  											//m:月份 d:日期 y:年分 
	
	printf("Enter first date (mm/dd/yyyy):");
	scanf("%d/%d/%d",&d1,&m1,&y1);
	printf("Enter second date (mm/dd/yyyy):");
	scanf("%d/%d/%d",&d2,&m2,&y2);
	
	if(y1<y2){
		printf("%d/%d/%d is earlier than %d/%d/%d\n",d1,m1,y1,d2,m2,y2);
	}
	else if(y2<y1){
		printf("%d/%d/%d is earlier than %d/%d/%d\n",d2,m2,y2,d1,m1,y1);
	}
	else if(y1 == y2){
		if(m1<m2){
		printf("%d/%d/%d is earlier than %d/%d/%d\n",d1,m1,y1,d2,m2,y2);
		}
		else if(m2<m1){
		printf("%d/%d/%d is earlier than %d/%d/%d\n",d2,m2,y2,d1,m1,y1);
		}
		else if(m2 == m1){
			if(d1<d2){
			printf("%d/%d/%d is earlier than %d/%d/%d\n",d1,m1,y1,d2,m2,y2);
			}
			else if(d2<d1){
			printf("%d/%d/%d is earlier than %d/%d/%d\n",d2,m2,y2,d1,m1,y1);
			}
		}
	}
	
	
	return 0;
}
