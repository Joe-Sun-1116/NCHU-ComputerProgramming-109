/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

int main()
{
	char str[MAX];
	scanf("%s",str);
	int count = strlen(str);
	
	
	for(int i = 1 ; i<count ; i++)
	{	
		for(int j = i ; j<count ; j++)
		{
			printf("%c",str[j]);
		}
		for(int k = 0 ; k<i ; k++)
		{
			printf("%c",str[k]);
		}
		printf("\n");
	}
	for(int i = 0 ; i<count ; i++)
	{
		printf("%c",str[i]);
	}
	return 0 ;
}
