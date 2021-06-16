/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 19

int selection_sort(int [],int);
void swap(int*,int*);

int main()
{
    int N;
    int num[MAX] = {0};
    
    scanf("%d",&N);
	
	for(int i = 0 ; i<N ; i++)
		scanf("%d",&num[i]);
    
	
    printf("%s",(selection_sort(num,N) <= 1 ? "YES" : "NO"));
	return 0;
}

void swap (int* a , int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int selection_sort(int num[],int size)
{
    int min_id;
    int count = 0;

    for(int i = 0 ; i<size-1 ; i++)
    {
        min_id = i;

        for(int j = i+1 ; j<size ; j++)
            if(num[j] < num[min_id])
                min_id = j;
		
		if(i != min_id)
        {
            swap(&num[i],&num[min_id]);
            count++;
        }
    }
    
	return count;
}
