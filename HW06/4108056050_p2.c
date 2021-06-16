/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
int is_prime(int);

int main()
{

	int n=0, i, j, tem, check=1, flag=1, move, power=1;

	scanf("%d", &n);
	tem = n/10;

	while(tem!=0)
	{
		check++;
		power = power *10;
		tem = tem / 10;
	}

	tem = n;
	for(i=0; i<check; i++)
	{

		flag = is_prime(tem);
		
		if(flag==0)
		{
			break;
		}
		move = tem / power;
		tem = (tem%power)*10 + move;

	}

	if(flag==0)
		printf("not circular prime\n");
	else
		printf("circular prime\n");


	return 0;
}

int is_prime(int n)
{
	int flag=1;
	for(int j=2; j<n; j++)
		{
			if(n%j==0)
			{
				flag = 0;
				break;
			}
		}
		if(flag==0)
			return 0;
		else
			return 1;
		
}
