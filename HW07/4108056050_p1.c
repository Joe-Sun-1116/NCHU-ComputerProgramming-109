/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include<stdio.h>
#include<math.h>

int numinverse(int n);
int main(){
	
	int num;
	int index=0;
	scanf("%d",&num);
	
	printf("%d",numinverse(num));
	
	return 0;
	
}

int numinverse(int number){
	int inverse=0,index=0;
	int temp=number;
	while(temp>0){
		index++;
		temp/=10;
	}
	for(number ; number>0 ; number/=10){
		inverse += (number%10)*(int)pow(10,index-1);
		index--;
	}
	return inverse;
}
