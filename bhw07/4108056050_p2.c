/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

int row = 0,colum = 0,start = 0;
char maze[51][51];
int steps[51][51] = {0};
int visit[51][51] = {0};

int ok(int,int);

int main()
{
	scanf("%d %d %d",&row,&colum,&start);
	getc(stdin);
	
	for(int i = 1 ; i<=row ; i++)
	{
		for(int j = 1 ; j<=colum ; j++)
		{
			scanf("%c",&maze[i][j]);	
		}
		getc(stdin);
	}
	
	int y = start;
	int x = 1;
	int pace = 0;
	int flag = 0;
	int ans = 0;
	
	while(visit[x][y] == 0)
	{
		steps[x][y] = pace++;
		visit[x][y] = 1;
		
		if(ok(x,y))
		{
			switch(maze[x][y])
			{
				case 'W' :
					y-=1;
					break;
				case 'E' :
					y+=1;
					break;
				case 'N' :
					x-=1;
					break;
				case 'S' :
					x+=1;
					break;
			}
		}
		else
		{
			flag = 1;
			ans = steps[x][y];
			break;
		}
	}
	
	if(flag)
		printf("%d",ans);
	else
		printf("%d %d",steps[x][y],pace - steps[x][y]);
		
	return 0;
}

int ok (int x , int y)
{
	if(x>=1 && x<=row)
	{
		if(y>=1 && y<=colum)
			return 1;
		else 
			return 0;
	}
	else
		return 0;	
}
