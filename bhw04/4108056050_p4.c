/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#define max(num1,num2) num1>num2?num1:num2

int money(int*,int);

int main()
{
	int N;
	scanf("%d",&N);
	int arr[N];
	
	for(int i = 0 ; i<N ; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("%d",money(arr,N));
	
	return 0;
}  

int money(int* arr,int count)
{
	int num1 = 0, num2 = 0;
	for(int i = 0 ; i<count ; i+=2)
	{
		num1 = max(num1 + arr[i], num2);
		
		if(i+1 < count)
			num2 = max(num1, num2 + arr[i+1]);
	}	
	
	return max(num1,num2);
} 
