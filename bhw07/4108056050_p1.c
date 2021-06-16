/*
* 系級：資工二
* 學號：4108056050
* 姓名：孫禾洵
* 聯絡電子郵件：a0927554266@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayall(void);
void displayGP (void);
void displayCP (void);
void displayCal (void);

struct record
{
  char  id[10]; 
  double CP;
  double GP;
  double Calculus;
}student;

int main()
{
	FILE* inptr;
	int data_num = 0;
	int ctrl;
	double CPavg,GPavg,Calavg;
	double CPsum = 0,GPsum = 0,Calsum = 0;
	char ctrlcmd[20] = {0};
	char GPstr[] = " GP";
	char CPstr[] = " CP";
	char Calstr[] = " Calculus";
	char AVGstr[] = " AVG";
	
	inptr = fopen("Data.bin","rb");
	
	while(1)
	{
		fread (&student, sizeof (student), 1, inptr);
		if(!feof(inptr))
		{
			data_num++;
			CPsum += student.CP;
			GPsum += student.GP;
			Calsum += student.Calculus;	
		}	
		else
			break;
	}
	
	CPavg = CPsum/data_num;
	GPavg = GPsum/data_num;
	Calavg = Calsum/data_num;
	
	while(1)
	{
		scanf("%d",&ctrl);
		
		fgets(ctrlcmd,20,stdin);
		
		if(ctrlcmd[strlen(ctrlcmd) - 1] == '\n')
			ctrlcmd[strlen(ctrlcmd) - 1] = '\0';
			
		if(ctrl == -1)
		{
			printf("Stop querying!\n");
			printf("CP average: %.3f\n",CPavg);
			printf("GP average: %.3f\n",GPavg);
			printf("Calculus average: %.3f",Calavg);
			
			break;
		}
		
		else if(ctrl == 0)
			printf("There are %d students.\n",data_num);
			
		else if(strlen(ctrlcmd) == 0)
		{
			if(ctrl > data_num || ctrl < -1)
				printf("Error index. Please try again.\n");
			
			else
			{
				fseek(inptr,sizeof(student)*(ctrl-1),SEEK_SET);
				if(fread(&student,sizeof(student),1,inptr) == 1)
					displayall(); 
			}
		}
		
		else
		{
			if((ctrl > data_num) || (ctrl < -1))
				printf("Error index. Please try again.\n");
				
			else if(strcmp(ctrlcmd,GPstr) == 0)
			{
				fseek(inptr,sizeof(student)*(ctrl-1),SEEK_SET);
				if(fread(&student,sizeof(student),1,inptr) == 1)
					displayGP();
			}
			
			else if(strcmp(ctrlcmd,CPstr) == 0)
			{
				fseek(inptr,sizeof(student)*(ctrl-1),SEEK_SET);
				if(fread(&student,sizeof(student),1,inptr) == 1)
					displayCP();
			}
			
			else if(strcmp(ctrlcmd,Calstr) == 0)
			{
				fseek(inptr,sizeof(student)*(ctrl-1),SEEK_SET);
				if(fread(&student,sizeof(student),1,inptr) == 1)
					displayCal();
			}
			
			else if(strcmp(ctrlcmd,AVGstr) == 0)
			{
				fseek(inptr,sizeof(student)*(ctrl-1),SEEK_SET);
				if(fread(&student,sizeof(student),1,inptr) == 1)
				{
					double stusum = 0;
					stusum = (student.GP + student.CP + student.Calculus)/3;
					printf("%.3f\n",stusum);
				}
			}
			else
			{
				printf("We have no subject%s.\n",ctrlcmd);
			}
		}
	}

	fclose(inptr);
	
	return 0;
}

void displayall (void)
{
	printf("%s ",student.id);
	printf("%.3f ",student.CP);
	printf("%.3f ",student.GP);
	printf("%.3f\n",student.Calculus);
}

void displayGP(void)
{
	printf("%.3f\n",student.GP);
}

void displayCP(void)
{
	printf("%.3f\n",student.CP);
}

void displayCal(void)
{
	printf("%.3f\n",student.Calculus);
}
