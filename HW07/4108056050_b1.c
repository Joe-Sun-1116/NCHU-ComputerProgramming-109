#include <stdio.h>
#include<math.h>
#define MAX 10

int main()
{
	int num, temp=0, index=0, count=0;
	scanf("%d",&num);
	temp=num;
	while(temp>0){
		index++;
		temp/=10;
	}
	count=index;

	int arr[MAX]={0};
	
	for(int i=0 ; i<count ; i++){
		arr[i]=(num%10);
		num/=10;
		index--;
	}
	
	for (int i = 0; i < count; ++i) {
    	for (int j = 0; j < i; ++j) {
      		if (arr[j] > arr[i]) {
        	int temp = arr[j];
        	arr[j] = arr[i];
        	arr[i] = temp;
      		}
    	}
    }
    int j=1;
	while(arr[0]==0){
		
		if (arr[j]!=0){
			arr[0]=arr[j];
			arr[j]=0;
		}
		j++;
	}
	
	for(int i=0 ; i<count ; i++)
	{
		printf("%d",arr[i]);
	}
	
	return 0;
}

