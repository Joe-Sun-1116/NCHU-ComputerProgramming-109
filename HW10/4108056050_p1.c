/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int*,int*);

int** sort(int *ptr,int len){
	
	int **ans;
	
	ans = (int**)malloc((int)sqrt(len)*sizeof(int*));
	for(int i = 0 ; i<(int)sqrt(len) ; i++)
		ans[i] = (int*)malloc((int)sqrt(len)*sizeof(int));
	
	int min_id;

    for(int i = 0 ; i<len-1 ; i++)
    {//sorting begin;
        min_id = i;

        for(int j = i+1 ; j<len ; j++)
            if(ptr[j] < ptr[min_id])
                min_id = j;
		
		if(i != min_id)
        {
            swap(&ptr[i],&ptr[min_id]);
        }
    }//sorting end.

    for(int i = 0 ; i<(int)sqrt(len); i++)
    {
    	for(int j = 0 ; j<(int)sqrt(len) ; j++)
    	{
    		ans[i][j] = ptr[(int)sqrt(len)*i+j];
		}
	}
	
	return ans;
} 

int main() {
	int len, i, j;
	int **ans;
	
	scanf("%d", &len);
	
	int *a;
	
	a = (int*)malloc(len*sizeof(int)); 
	
	for (i = 0;i < len;i++) {
		scanf("%d", &a[i]);
	}
	
	ans = sort(a,len);

	for (i = 0; i<(int)sqrt(len); i++) {
		for (j = 0; j<(int)sqrt(len); j++) {
			printf("%d ", ans[i][j]);
		}
		printf("\n");
	}
	
	free(a);
	for (i=0; i<(int)sqrt(len); i++) {
         free(ans[i]);
    }
    free(ans);
	
	return 0;
}

void swap (int* a , int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

