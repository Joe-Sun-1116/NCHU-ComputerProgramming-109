/*
* �t�šG��u�G 
* �Ǹ��G4108056050
* �m�W�G�]�ݬ� 
* �p���q�l�l��Ga0927554266@gmail.com
*/
#include<stdio.h>

int main()
{
	int i,count;
	char cha;
	for(i;;)
	{
		scanf("%c",&cha);
		if(cha == 'a') count++;
		if(cha == 'e') count++;
		if(cha == 'i') count++;
		if(cha == 'o') count++;
		if(cha == 'u') count++;
		if(cha == 'A') count++;
		if(cha == 'E') count++;
		if(cha == 'I') count++;
		if(cha == 'O') count++;
		if(cha == 'U') count++;
		if(cha == '\n') break ;
	}
	printf("%d",count);
}
