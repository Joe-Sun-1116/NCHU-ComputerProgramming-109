/*
* ╰戈 
* 厩腹4108056050
* ﹎甝ポ 
* 羛蹈筿秎ンa0927554266@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	long long begin,end;					//ㄏノ块ぇ计
	long long begin1,end1;
	long long countfunc(long long);
	long long a = 0;						//ノㄓ砆Ι埃1 程ㄓ 
	scanf("%lld %lld",&begin,&end); 
	begin1 = countfunc(begin);
	end1 = countfunc(end);
	
	if (begin%10 == 1) 						//璸衡砆Ι埃1 
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
	if(num == 1)							//砞﹚1ぇ箇砞							
	return 1;

	long long count = 0;					//魁1瞷ぇΩ计 
	long long int round = num;				//round魁–计1瞷Ω计 
	
	if(round > 0){
		long long decision = round%10;		//decisionノㄓ耞Ю计 
		round /= 10;						//盢计计 
		count += round;
		if(decision >= 1)					
		count += 1; 
	}//璸衡计
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*10;
		if(decision == 1)
		count += num%10+1;     				//Ю计Τぶ耞计Τぶ1 
		else if(decision > 1)
		count += 10;	
	}//璸衡计 
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*100;
		if(decision == 1)
		count += num%100+1; 
		else if(decision > 1)
		count += 100;	
	}//璸衡κ计 
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*1000;
		if(decision == 1)
		count += num%1000+1; 
		else if(decision > 1)
		count += 1000;	
	}//璸衡计 
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*10000;
		if(decision == 1)
		count += num%10000+1; 
		else if(decision > 1)
		count += 10000;	
	}//璸衡窾计 
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*100000;
		if(decision == 1)
		count += num%100000+1; 
		else if(decision > 1)
		count += 100000;	
	}//璸衡窾计 
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*1000000;
		if(decision == 1)
		count += num%1000000+1; 
		else if(decision > 1)
		count += 1000000;	
	}//璸衡κ窾计 
	if(round > 0){
		long long decision = round%10;
		round /= 10;
		count += round*10000000;
		if(decision == 1)
		count += num%10000000+1; 
		else if(decision > 1)
		count += 10000000;	
	}//璸衡窾计 
	
	return count;
}






