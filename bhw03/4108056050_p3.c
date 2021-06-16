/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#define MAX 10000001

int Prime[MAX] = {0};

int main()
{
	int N = 0, count = 0;
	scanf("%d",&N);
	
	Prime[0] = 1;
	Prime[1] = 1;
	
	for(long long int i = 2 ; i<MAX ; i++)
	{
		if(!Prime[i])
			for(long long int j = i*i ; j<MAX ; j+=i)
				Prime[j] = 1;
	}
	for(long long int i = 0 ; i<N ; i++)
	{
		if(!Prime[i])
			count++;
	}
	printf("%d",count);
	
	return 0;
} 
