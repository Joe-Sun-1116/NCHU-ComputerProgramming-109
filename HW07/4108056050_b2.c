/*
* �t�šG��u�G
* �Ǹ��G4108056050
* �m�W�G�]�ݬ�
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>
int main(){
	int a,b,count=0;
	int arr[10]={0};
	scanf("%d %d",&a,&b);
	while(a>b){
		arr[count]=a%b;
		count++;
		a=a/b;
	}
	arr[count]=a;
	
	for(int i=0 ; i<=count ;i++)
	printf("%d",arr[count-i]);
	
	return 0;
}
