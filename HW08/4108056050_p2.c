/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d",&x);
	
	int arr1[x];
	for (int i=0 ; i<x ; i++){
		scanf("%d",&arr1[i]);
	}
	
	scanf("%d",&y);
	
	int arr2[x];
	for (int i=0 ; i<y ; i++){
		scanf("%d",&arr2[i]);
	}
	
	int arr[x+y];
	
	for(int i=0 ; i<x ; i++){
		arr[i] = arr1[i];
	}
	for(int i=0 ; i<y ; i++){
		arr[i+x] = arr2[i];
	}
	for (int i = 0; i < x+y; ++i) {
    	for (int j = 0; j < i; ++j) {
      		if (arr[j] > arr[i]) {
        	int temp = arr[j];
        	arr[j] = arr[i];
        	arr[i] = temp;
      		}
    	}
	}
	
	if(((x+y) % 2 == 0) &&  arr[(x+y)/2] != arr[(x+y)/2-1])
		printf("%d",(arr[(x+y)/2 -1]) + (arr[(x+y)/2]) /2);
	else if(((x+y) % 2 == 0) && (arr[(x+y)/2] == arr[(x+y)/2]))
		printf("%d",arr[(x+y)/2]);
	else
		printf("%d",(arr[(x+y)/2]));
}


