/*
* �t�šG��u�G 
* �Ǹ��G4108056050
* �m�W�G�]�ݬ� 
* �p���q�l�l��Ga0927554266@gmail.com
*/
#include<stdio.h>
int j,i=1;
double min,e=1,add=1;
int main()
{
	scanf("%lf",&min);
	
	while(add>=min)
	{
		add=1;
		for(j=1;j<=i;j++)
		{
			add /=j;
		}
		e+=add;
		i++;
	}
	
	printf("%.12f",e);
}
