/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include<stdio.h>
#include<math.h>
#define SIZE 10

int main(){
	int number=0,index=0,temp=0;
	int count[SIZE]={0};
	scanf("%d",&number);
	temp=number;
	
	while(temp>0){
		index++;
		temp/=10;
	}
	
	for(int i=0 ; i<index ; i++){
		count[number%10]++;
		number/=10;
	}
	
	for(int i=0 ; i<=9 ; i++){
		printf("%d ",count[i]);
	}
	
	return 0;
	
} 
