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
	int h,n;
	int i;					//�j���ܶq 
	fflush(stdin);
	scanf("%d %d",&h,&n);
	float h1=h,sum=h;
	
	if(n==1)
	{
		printf("%.3f",h1);
	}
	else
	{
		for(i=1 ; i<+n ; ++i)
		{
			h1 = h1/2;
			sum+=(h1*2);
		}
		h1/=2;
		printf("%.3f %.3f",sum,h1);		
	}
	
	return 0;
}
