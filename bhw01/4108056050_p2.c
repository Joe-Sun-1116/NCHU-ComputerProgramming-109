/*
* �t�šG��u�G 
* �Ǹ��G4108056050
* �m�W�G�]�ݬ� 
* �p���q�l�l��Ga0927554266@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;							//�ϥΪ̿�J���T�ӼƦr
	int num;							//��J���T��� 
	int temp;							//�Ȧs�ܼ� 
	printf("�п�J�@�ӤT��Ʀr:");
	scanf("%d",&num);
	a = num/100;						//�ھڤT��ƨ��X�T�ӼƦr 
	b = (num-a*100)/10;
	c = num-(a*100+b*10);
	
	if(a>b){
		temp = a;
		a = b;
		b = temp;
	} 
	if(a>c){
		temp = a;
		a = c;
		c = temp;
	} 
	if(b>c){
		temp = c;
		c = b;
		b = temp;
	} 
	
	if(a != 0)
	printf("%d%d%d",a,b,c);
	else if(b != 0)
	printf("%d%d%d",b,a,c);
	else if(c != 0)
	printf("%d%d%d",c,a,b);
	
	
	return 0;
}
