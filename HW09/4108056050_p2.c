/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
void frac(int,int,int*,int*);
int main()
{
	int a, b;
	scanf("%d/%d",&a,&b);
	int* ap = &a,bp = &b;
	frac(a,b,ap,bp);
	printf("%d/%d",a,b);
	
	return 0;
}

void frac(int a,int b,int* ap,int* bp)
{
	int i = a;
	int j = b;
	int k = 0;
	while(b!=0)
	{
		int r = a % b;
		a = b;
		b = r;
	}

	*ap = *ap/a;
	*bp = *bp/a;
}
