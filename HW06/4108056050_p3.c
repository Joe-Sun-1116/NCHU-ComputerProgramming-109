/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cnt(int);

int main()
{
	int begin=0, end=0;
	int factor=0, ans=0;
	scanf("%d %d",&begin ,&end);
	
	for(int i=begin ; i<=end ; i++){
		if(cnt(i)>factor){
			factor = cnt(i);
			ans = i;
		}
	}
	printf("%d",ans);	
	
	return 0;
} 

int cnt(int n)
{
	int k=sqrt(n);
	int count=0;
	for(int i=1 ; i<=k ; i++)
	{
		if (n%i == 0)
		count++;
	}
	if (k*k==n)
		return count*2-1;
	else 
		return count*2;
}
