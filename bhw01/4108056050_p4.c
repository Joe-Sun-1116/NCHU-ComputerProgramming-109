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
	long long begin,end;					//�ϥΪ̿�J���Ʀr
	long long begin1,end1;
	long long countfunc(long long);
	long long a = 0;						//�ΨӦs��h�Q������1 �̫�A�[�^�� 
	scanf("%lld %lld",&begin,&end); 
	begin1 = countfunc(begin);
	end1 = countfunc(end);
	
	if (begin%10 == 1) 						//�p��h�Q������1 
	a+=1;
	if ((begin%100)/10 == 1)
	a+=1;
	if ((begin%1000)/100 == 1)
	a+=1;
	if ((begin%10000)/1000 == 1)
	a+=1;
	if ((begin%100000)/10000 == 1)
	a+=1;
	if ((begin%1000000)/100000 == 1)
	a+=1;
	if ((begin%10000000)/1000000 == 1)
	a+=1;
	printf("%d",end1-begin1+a);
	
	return 0;
}

long long countfunc(long long num)
{
	if(num == 1)							//�]�w1���w�]��							
	return 1;

	long long count = 0;					//����1�X�{������ 
	long long int round = num;				//round�����C���1�X�{������ 
	
	if(round > 0){
		long long decision = round%10;		//decision�ΨӧP�_���� 
		round /= 10;						//�N�Ʀr���@��� 
		count += round;
		if(decision >= 1)					
		count += 1; 
	}//�p��Ӧ��
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*10;
		if(decision == 1)
		count += num%10+1;     				//�ݧ��Ʀ��h�֭ӡA�H�P�_�W�@��Ʀ��h�֭�1 
		else if(decision > 1)
		count += 10;	
	}//�p��Q��� 
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*100;
		if(decision == 1)
		count += num%100+1; 
		else if(decision > 1)
		count += 100;	
	}//�p��ʦ�� 
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*1000;
		if(decision == 1)
		count += num%1000+1; 
		else if(decision > 1)
		count += 1000;	
	}//�p��d��� 
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*10000;
		if(decision == 1)
		count += num%10000+1; 
		else if(decision > 1)
		count += 10000;	
	}//�p��U��� 
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*100000;
		if(decision == 1)
		count += num%100000+1; 
		else if(decision > 1)
		count += 100000;	
	}//�p��Q�U��� 
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*1000000;
		if(decision == 1)
		count += num%1000000+1; 
		else if(decision > 1)
		count += 1000000;	
	}//�p��ʸU��� 
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*10000000;
		if(decision == 1)
		count += num%10000000+1; 
		else if(decision > 1)
		count += 10000000;	
	}//�p��d�U��� 
	
	return count;
}






