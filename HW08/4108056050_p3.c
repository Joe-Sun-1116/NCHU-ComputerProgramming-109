/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
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

