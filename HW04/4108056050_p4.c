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
	int t;
	fflush(stdin);
	scanf("%d %d",&a,&b);
	if(a<b)
    {
        t=a;
		a=b;
		b=t;
	}
	while(a%b)
    {
        t=b;
        b=a%b;
        a=t;
	}
	if(b==1)
	printf("Coprime");
	else
	printf("%d",b);
	
	return 0;
}
