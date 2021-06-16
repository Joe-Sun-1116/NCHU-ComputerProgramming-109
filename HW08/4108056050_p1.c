/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int N[MAX];

void bubble(int N[]);
void print(void);

int main()
{
	srand(100);
	for(int i=0 ; i<10 ; i++){
		N[i] = (rand() % 103) +7;
	}

	bubble(N);
	print();
}

void bubble (int arr[]){
	for (int i = 0; i < 10; ++i) {
    	for (int j = 0; j < i; ++j) {
      		if (arr[j] > arr[i]) {
        	int temp = arr[j];
        	arr[j] = arr[i];
        	arr[i] = temp;
      		}
    	}
    }
    for (int i = 0; i < 10; ++i) {
    	printf("%d ",N[i]);
	}
}

void print(void){
	printf("\n");
	for (int i = 1; i <= 10; ++i) {
    	printf("%d ",N[10-i]);
	}
}

