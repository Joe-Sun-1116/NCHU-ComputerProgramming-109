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
	int a,b;
	printf("Numbers to multiply:");
	scanf("%d %d",&a,&b);
	
	printf("%6d\n",a);
	printf("x%5d\n",b);
	printf("------\n");
	if(b>10)
	{
		printf("%6d\n",(b%10)*a);
		printf("+%4d\n",(b/10)*a);
		printf("------\n")
	}
	printf("%6d",a*b);
	
	return 0 ;
}


