/*
* �t�šG��u�G 
* �Ǹ��G4108056050
* �m�W�G�]�ݬ� 
* �p���q�l�l��Ga0927554266@gmail.com
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, p;
	int i, j;
	int sum = 0 ;
	int num = 1;
	fflush(stdin);
	scanf("%d %d",&n,&p);
	
	for(i=1 ; i<=n ; i++)
	{
		for(j=1 ; j<=p ; j++)
		{
			num *= i;
		}
		sum+=num;
		num=1;
	}
	printf("%d",sum);
	
	return 0;
}

