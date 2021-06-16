/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include<stdio.h>
#include<math.h>

int numinverse(int n);
int main(){
	
	int num;
	int index=0;
	scanf("%d",&num);
	
	printf("%d",numinverse(num));
	
	return 0;
	
}

int numinverse(int number){
	int inverse=0,index=0;
	int temp=number;
	while(temp>0){
		index++;
		temp/=10;
	}
	for(number ; number>0 ; number/=10){
		inverse += (number%10)*(int)pow(10,index-1);
		index--;
	}
	return inverse;
}
