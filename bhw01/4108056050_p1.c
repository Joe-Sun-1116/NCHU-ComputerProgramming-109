/*
* 系級：資工二 
* 學號：4108056050
* 姓名：孫禾洵 
* 聯絡電子郵件：a0927554266@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int num1,num2,num3;			//使用者輸入的三個數字 
	int result1,result2;		//運算結果 
	char c1,c2;					//使用者輸入的運算子 
	printf("請輸入一個運算式:");
	scanf("%d%c%d%c%d",&num1,&c1,&num2,&c2,&num3);
	
	switch (c1){
		case '+' :
			result1 = num1 + num2;
			break;
		
		case '-' :
			result1 = num1 - num2;
			break;
		
		case '*' :
			result1 = num1 * num2;
			break;
	}
	
	switch (c2){
		case '+' :
			result2 = result1 + num3;
			break;
		
		case '-' :
			result2 = result1 - num3;
			break;
		
		case '*' :
			result2 = result1 * num3;
			break;
	}
	printf("%d",result2);
	
	return 0;
}
