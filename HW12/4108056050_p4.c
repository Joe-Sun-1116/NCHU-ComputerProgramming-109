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
		if(c < 'z' && c > 'a')
			fprintf(F,"%c",c-32);
		else if(c < 'Z' && c > 'A')
			fprintf(F,"%c",c);
		else
			fprintf(F,"%c",'_');
		
		scanf("%c",&c);
	}
	
	fclose(F);
	return 0;
}
