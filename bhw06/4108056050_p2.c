/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	
	for(int i = 1 ; i<N ; ++i)
	{
		int k = 0;
		
		for(int j = 1 ; j<N ; ++j)
			k = (k+i)%j;
		
		if(k == 11)
		{
			printf("%d",i);
			break;
		}	
	}
	
	return 0;
}
