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
	F = fopen(name,"r");
	int a = 0,b = 0;
	
	while((fscanf(F,"%d %d",&a,&b)) != EOF)
	{
		printf("%d\n",a+b);
	}
	
	fclose(F);
	return 0;
}
