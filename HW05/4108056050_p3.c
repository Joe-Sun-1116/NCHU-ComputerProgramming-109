#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m=2147483647,d=2147483647,y=2147483647;
	int m1,d1,y1;
	int m2,d2,y2;	
	
	while(1)
	{
		printf("Enter a date (mm/dd/yyyy):");
		fflush(stdin);
		scanf("%d/%d/%d",&m1,&d1,&y1);
		if(y1!=0)
		{
			y2=y1;
			d2=d1;
			m2=m1;
		}
		else if(y1 == 0)
		break;
		
		if(y2<y)
		{
			y=y2;
			d=d2;
			m=m2;
		}
		else if(y2==y)
		{
			if(m2<m)
			{
				m=m2;
				d=d2;
			}
			else if(m2==m)
			{
				if(d2<d)
				d=d2;
			}
		}
	} 
	
	printf("%d/%d/%d is the earliest date",m+1,d+1,y+1);
	
}
