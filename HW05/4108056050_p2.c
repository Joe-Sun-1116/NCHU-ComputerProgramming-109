/*
* �t�šG��u�G 
* �Ǹ��G4108056050
* �m�W�G�]�ݬ� 
* �p���q�l�l��Ga0927554266@gmail.com
*/
#include<stdio.h>

int gcd(int m, int n)
{
    while(n != 0)
	{ 
        int r = m % n; 
        m = n; 
        n = r; 
    } 
    return m;
}

int main()
{
	int a,b;
	int gcdnum;
	scanf("%d/%d",&a,&b);
	gcdnum = gcd(a,b);
	printf("%d/%d",a/gcdnum,b/gcdnum);
	return 0;
}
