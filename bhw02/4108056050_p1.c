/*
* �t�šG��u�G 
* �Ǹ��G4108056050
* �m�W�G�]�ݬ� 
* �p���q�l�l��Ga0927554266@gmail.com
*/

#include <stdio.h>

int main()
{
	float num,floinvert, sum;
	scanf("%f",&num);
	int index1, index2, index3, findex1, findex2, findex3, intinvert;
	
	index1 = (int) num%10;
	index2 = (int) (num/10)%10;
	index3 = (int) (num/100);
	
	findex3 = (int)(num*10)%10;
	findex2 = (int)(num*100)%10;
	findex1 = (int)(num*1000)%10;
	
	intinvert = index1*100 + index2*10 + index3;
	floinvert = (float)findex1/10 + (float)findex2/100 + (float)findex3/1000;
	sum = (float)intinvert + floinvert;
	sum = num + sum;
	printf("%.3f",sum);
	
	
	return 0;
	
}
