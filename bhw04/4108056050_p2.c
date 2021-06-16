/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 200000

int main()
{
    int N;
    int big = 0, big_2 = 0;
    int arr[MAX];
    scanf("%d",&N);
    
    for(int i = 0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] > big)
        {
        	big_2 = big;
        	big = arr[i];	
		}
        
		else if(arr[i] > big_2)
			big_2 = arr[i];		
    }
    
	if(big == big_2)
	{
		for(int i = 0 ; i<N ; i++)
		{
			printf("%d\n",big);
		}
	}
	else
	{
		for(int i = 0 ; i<N ; i++)
		{
			if(arr[i] == big)
				printf("%d\n",big_2);
			
			else
				printf("%d\n",big);
		}
	}
    /*for(int i = 0 ; i<N ; i++)
    {
    	if(arr[i] != big)
    	{
    		printf("%d\n",big);
    		continue;
		}
	
		else
		{
        	for(int j = 0 ; j<N ; j++)
        	{
            	if(j == i)
                	continue;
            
            	if(arr[j] > big_2)
                	big_2 = arr[j];
        	}
        	printf("%d\n",big_2);
		}
	}*/
    return 0;
}
