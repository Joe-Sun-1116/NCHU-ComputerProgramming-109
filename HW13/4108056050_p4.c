/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>

struct med
{
	char name[16];
	int interval;
};
		
int main()
{
	int N;
	int times, type, temp=0;
	int min_time;
	int k = 0;
	int counter = 0;
	scanf("%d",&N);
	
	for(int i = 0 ; i<N ; i++)
	{	
		scanf("%d %d",&type,&times);
		
		struct med medicine[type];
		
		for(int i = 0 ; i<type ; i++)
		{
			scanf("%s %d",medicine[i].name,&medicine[i].interval);
		}
		
		while(counter < times)
		{
			k++;
			
			for(int i = 0 ; i<type ; i++)
			{
				if(k % medicine[i].interval == 0)
				{
					printf("%d %s\n",k,medicine[i].name);
					counter++;
				}
				if(counter == times)
					break;
			}
		}
	}
}
