/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/
#include<stdio.h>
#define MAX 19

int check(int number[],int index,int sum)
{
	int count = 0;
	int flag = 1;
	
	while(flag)
	{	
		for(int i = count ; i<index ; i++){
		
			if(number[i] % 3 == 0)
				continue;
		
			if( (sum - number[i]) % 3 == 0){
				flag = 0;
				break;
			}
		} 
		
		sum-=number[count];
		count++;
		
		if(count == index)
			return -1;
	}
	
	return count;
}

int main()
{
    int sum=0, index=0;
    int number[MAX] = {0};
    char numchar[MAX] = {0};
    
    scanf("%s", &numchar);
    
    for(int i = 0 ; i<=19 ; i++ ){
        
		number[i] = numchar[i] - '0';
        
		if(number[i] != -48){
            index++;
            sum+=number[i];
        }//�p��Ʀr��� 
	}//�N�ҿ�J�s��i��ư}�C 
	
	if(sum % 3 == 0){
		printf("0");
		return 0;
	}
		
	
    
	printf("%d",check(number,index,sum));

    return 0;
}
