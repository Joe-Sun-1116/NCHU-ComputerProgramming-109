/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>

int main()
{
	FILE *F;
	char name[501];
	scanf("%s",name);
	getchar();
	char c;
	
	F = fopen(name,"w");
	
	scanf("%c",&c);
	while(c != '\n')
	{
		fprintf(F,"%c",c);
		scanf("%c",&c);
	}
	
	fclose(F);
	return 0;
}
