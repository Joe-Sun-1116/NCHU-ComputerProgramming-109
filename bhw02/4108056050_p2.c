/*
* �t�šG��u�G 
* �Ǹ��G4108056050
* �m�W�G�]�ݬ� 
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main()
{
	long int count = 0, num, a, c;
	scanf("%ld",&num);
	
	for(c=1 ; c<num ; c++)
	{
		for(a=1 ; a<=(long int)sqrt(num-c) ; a++)
		{
			if((num-c)%a==0 )
			count+=2;
			if(a*a == (num-c))
			count--;
		}
	}
	
	printf("%d",count);
	
	return 0;
}
