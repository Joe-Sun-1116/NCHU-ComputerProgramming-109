/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
int recur(int);
int fac(int);


int main()
{
	/******�Ĥ@��******/
	int n=0;
	int temp=1;
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++)
		temp*=i;
	
	printf("%d %d %d",temp,fac(n),recur(n));
	
	
	return 0;
}

int fac(int n)
{
	int temp=1;
	for(int i=1 ; i<=n ; i++)
		temp*=i;
	
	return temp;	
}



int recur(int n)
{
	if(n>0)
		return(recur(n-1)*n);
	else
		return 1;
}
