/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#define MAX 19

int main()
{
	int n;
	long long int num1,num2;
	
	scanf("%d",&n);
	fflush(stdin);
	scanf("%lld",&num1);
	n--;
	
	for(; n>0 ; n--)
	{
		scanf("%lld",&num2);
		num1*=num2;
	}
	if(num1 > 1000000000000000000)
		printf("-1");
 	else
 		printf("%lld",num1);
	
	return 0;
} 
