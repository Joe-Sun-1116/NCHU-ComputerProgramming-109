/*
* �t�šG��u�G 
* �Ǹ��G4108056050
* �m�W�G�]�ݬ� 
* �p���q�l�l��Ga0927554266@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int num1,num2,num3;			//�ϥΪ̿�J���T�ӼƦr 
	int result1,result2;		//�B�⵲�G 
	char c1,c2;					//�ϥΪ̿�J���B��l 
	printf("�п�J�@�ӹB�⦡:");
	scanf("%d%c%d%c%d",&num1,&c1,&num2,&c2,&num3);
	
	switch (c1){
		case '+' :
			result1 = num1 + num2;
			break;
		
		case '-' :
			result1 = num1 - num2;
			break;
		
		case '*' :
			result1 = num1 * num2;
			break;
	}
	
	switch (c2){
		case '+' :
			result2 = result1 + num3;
			break;
		
		case '-' :
			result2 = result1 - num3;
			break;
		
		case '*' :
			result2 = result1 * num3;
			break;
	}
	printf("%d",result2);
	
	return 0;
}
