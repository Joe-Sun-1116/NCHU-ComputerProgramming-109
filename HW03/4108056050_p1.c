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
	int num;                 		//�ϥΪ̿�J���Ʀr 
	
	printf("Enter a number:");
	scanf("%d",&num);
	if(num>=0 && num<=9)
	{
		printf("The number %d has 1 digits.\n",num);
	}
	if(num>=10 && num<=99)
	{
		printf("The number %d has 2 digits.\n",num);
	}
	if(num<=999 && num>=100)
	{
		printf("The number %d has 3 digits.\n",num);
	}
	
	if(num<=9999 && num>=1000)
	{
		printf("The number %d has 4 digits.\n",num);
	}
	
	return 0;
 } 
