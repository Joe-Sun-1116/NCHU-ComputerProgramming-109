/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
int pascal(int,int);


int main()
{
	int R,C;
	scanf("%d %d",&R,&C);
	printf("%d",pascal(R,C));
	
	return 0;
}

int pascal(int r,int c)
{
	if(r==c || c==0)
		return 1;
	else
		return pascal(r-1,c-1)+pascal(r-1,c);
}
