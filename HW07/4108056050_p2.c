/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
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
