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
	int month;
	printf("Enter you month number:");
	scanf("%d",&month);
	
	switch (month)
	{	
		case 1 : printf("It is winter.\n");
		break; 
		case 2 : 
		case 3 : 
		case 4 : printf("It is spring.\n");
		break; 
		case 5 : 
		case 6 : 
		case 7 : printf("It is summer.\n");
		break; 
		case 8 : 
		case 9 : 
		case 10 : printf("It is autumn.\n");
		break; 
		case 11 :
		case 12 : printf("It is winter.\n");
		break; 
		
		default : printf("Out if range.\n");
		
	}
	
	return 0;
}
