/*
* �t�šG��u�G 
* �Ǹ��G4108056050
* �m�W�G�]�ݬ� 
* �p���q�l�l��Ga0927554266@gmail.com
*/
#include<stdio.h>

int main()
{
	int days, begin,count;
	int i ,j;
	scanf("%d %d",&days,&begin);
	

	
	for(i=1 ; i<=begin ; i++)
	{
		printf("   ");
		count++;
	}
	
	for(j=1 ; j<=days ;j++)
	{
		printf("%2d ",j);
		count++;
		if(count == 7)
		{
			printf("\n");
			count = 0;
		}
	}
	return 0;
}
