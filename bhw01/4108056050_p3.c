/*
* �t�šG��u�G 
* �Ǹ��G4108056050
* �m�W�G�]�ݬ� 
* �p���q�l�l��Ga0927554266@gmail.com
*/
#include<stdio.h>
#include<stdlib.h>

int main()									//���{�������߼ƥ� 
{
	int chi;
	int rab;
	int n,m;								//���[��=n   �`�L=m 
	scanf("%d %d",&n,&m);
	chi = (4*n-m)/2	;						//�����ƶq
	rab = n-chi; 							//�ߪ��ƶq 
	
	if(chi>=0 && rab>=0 && m%2==0)
	printf("%d %d",rab,chi);
	else
	printf("No solution.");
	
	return 0;
}
