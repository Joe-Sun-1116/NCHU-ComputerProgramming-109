/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

struct array
{
	int data[SIZE];
};

int main(void)
{
	struct array arr1, arr2;
	
	int N;
	scanf("%d",&N);
	
	for(int  i = 0 ; i<N ; i++)
	{
		scanf("%d",&arr1.data[i]);
	}
	
	fflush(stdin);
	
	for(int  i = 0 ; i<N ; i++)
	{
		scanf("%d",&arr2.data[i]);
	}
	
	struct array arr;
	
	for(int  i = 0 ; i<N ; i++)
	{
		arr.data[i] = arr1.data[i] + arr2.data[i];
		printf("%d ",arr.data[i]);
	}
	
	return 0;
}

