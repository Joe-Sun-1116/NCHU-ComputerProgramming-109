/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#define SIZE 100

struct array
{
	int size;
	int data[SIZE];
};

int main()
{
	struct array arr;
	scanf("%d",&arr.size);
	
	for(int i = 0 ; i<arr.size ; i++)
	{
		scanf("%d",&arr.data[i]);
	}
	
	for(int i = 0 ; i<arr.size ; i++)
	{
		printf("%d ",arr.data[i]);
	}
	
	return 0;
}
