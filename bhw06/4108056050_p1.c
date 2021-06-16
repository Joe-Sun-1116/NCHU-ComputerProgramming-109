/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <math.h>

long long int determinant(int ,long long int matrix[][8]);
void remain_cal(int,long long int matrix[][8],long long int remain[][8],int);

int main()
{
	long long int matrix[8][8] = {0};
	
	int level = 0;
	long long int result;
	
	scanf("%d",&level);
	
	for(int i = 0 ; i<level ; i++)
	{
		for(int j = 0 ; j<level ; j++)
		{
			scanf("%lld",&matrix[i][j]);
		}
	}
	
	result = determinant(level , matrix);
	
	printf("%lld",result);
	
	return 0;
} 

long long int determinant(int level ,long long int matrix[][8])
{
	long long int remain[8][8] = {0};
	long long int ans = 0;
	int coe ;
	int result_level;
	
	result_level = level - 1;
	
	if(level == 1)
		ans = matrix[0][0];

	if(level >= 1)
	{
		for(int i = 0 ; i<level ; i++)
		{
			remain_cal(i,matrix,remain,level);
			
			if(i % 2 == 0)
				coe = 1;
			else
				coe = -1;
				
			ans = ans + coe*matrix[i][0]*determinant(result_level,remain);
		}
	}
	return ans;
}

void remain_cal(int i,long long int matrix[][8],long long int remain[][8],int level)
{
	int k = 0;
	
	for(int p = 0 ; p<level ; p++)
	{
		if(p == i)
			continue;
		
		for(int j = 1 ; j<level ; j++)
			remain[k][j-1] = matrix[p][j];
			
		k++;
	}
}
