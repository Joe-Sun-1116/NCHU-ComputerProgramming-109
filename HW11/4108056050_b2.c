/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#define MAX 200000

int main(void)
{
	int arr[MAX];
	int N, count=0;
	int k = 1;
	scanf("%d",&N);
	
	for(int i = 0 ; i<N ; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i = 0 ; i<N ; i++)
	{
		if(arr[i] != k)
			count++;
		else if(arr[i] == k)
			k++;
	}
	
	if(count == N)
		printf("-1");
	else
		printf("%d",count);
	
	return 0;
}
