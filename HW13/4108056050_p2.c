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
	int sum = 0;
	scanf("%d",&N);
	
	
	for(int i = 0 ; i<N ; i++)
	{
		int number[16] = {0};
		
		for(int i = 0 ; i<16 ; i++)
		{
			scanf("%1d",&number[i]);
		}
		for(int i = 0 ; i<8 ; i++)
		{
			number[2*i] = 2*number[2*i];
		}
		for(int i = 0 ; i<16 ; i++)
		{	
			while(number[i])
			{
				sum += (number[i]%10);
				number[i]/=10;
			}
		}
	
		if(sum%10 == 0)
			printf("Valid\n");
		else
			printf("Invalid\n");
		
	}
}
