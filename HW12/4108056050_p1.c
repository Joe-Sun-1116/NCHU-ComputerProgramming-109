/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h> 

int main()
{
	int N;
	FILE *fptr;
	scanf("%d",&N);
	getchar();
	char filename[501];
	
	for(int i = 0 ; i<N ; i++)
	{
		scanf("%s",filename);
		getchar();
		
		fptr = fopen(filename,"r");
		
		if(fptr != NULL)
		{
			printf("%s opened successfully\n",filename);
		}
		else
		{
			printf("%s opened failed\n",filename);
		}
		fclose(fptr);
	}

	return 0;
}
