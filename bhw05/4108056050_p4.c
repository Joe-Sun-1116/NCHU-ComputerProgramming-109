/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

long long int gcd(long long int m, long long int n) 
{
    while(n != 0) 
	{ 
        long long int r = m%n; 
        m = n; 
        n = r; 
    } 
    return m;
}

long long int lcm(long long int m, long long int n) 
{
    return m*n / gcd(m,n);
}

int main()
{
	long long int a, b, c, d;
	long long int count = 0;
	long long int num = 0;
		
	scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
	
	count += (b/c - a/c);
	if(a % c == 0)
		count++;
	
	count += (b/d - a/d);
	if(a % d == 0)
		count++;
		
	num = lcm(c,d);
	
	count -= (b/num - a/num);
	if(a % num == 0)
		count--;
	
	printf("%lld",b-a-count+1);
	
	return 0;
}
