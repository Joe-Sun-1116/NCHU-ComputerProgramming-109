/*
* �t�šG��u�G 
* �Ǹ��G4108056050
* �m�W�G�]�ݬ� 
* �p���q�l�l��Ga0927554266@gmail.com
*/
#include<stdio.h>
#include<stdlib.h>

int isPrime(int num)
{
	int flag=1;
	int i ;
	for(i=2 ; i<num && flag ; i++)
	{
		if(num%i == 0)
		flag = 0;
	}
	if(flag==1 && num!=1)
	return 1 ;
	else
	return 0;
}

int main()
{
	int number,i,count=0;
	scanf("%d",&number);
	for(i=2 ; i<=number ;i++)
	 {
	 	if(isPrime(i))
	 	count++;
	 } 
	printf("%d",count);
}
