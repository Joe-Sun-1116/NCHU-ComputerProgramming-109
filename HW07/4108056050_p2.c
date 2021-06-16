/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
int judge(char c);
int main(){
	char c;
	scanf("%c",&c);
	
	printf((judge(c)==1 ? "Yes" : "No"));
	return 0;
}

int judge(char c){
	if((c>=97 && c<=122) || (c>=65 && c<=90))
		return 1;
	else
		return 0;
}
