/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
int num_ways(int);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",num_ways(n));
	return 0;
}


int num_ways(int n)
{
	if (n==0 || n==1)
		return 1;
	else if (n==2)
		return 2;
	else if (n==3)
		return 4;
	else 
		return num_ways(n-1)+num_ways(n-2)+num_ways(n-3);
}
