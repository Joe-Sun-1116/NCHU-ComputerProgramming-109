/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>

int main()
{
	int row,colum;
	scanf("%d %d",&row,&colum);
	int matrix[51][51];

	for(int i=0 ; i<row ; i++){
		for(int j=0 ; j<colum ; j++)
		scanf("%d",&matrix[i][j]);
	}
	
	for(int i=0 ; i<colum ; i++){
		for(int j=0 ; j<row ; j++)
			printf("%d ",matrix[j][i]);
		printf("\n");	
	}
	
	
	return 0;
}

