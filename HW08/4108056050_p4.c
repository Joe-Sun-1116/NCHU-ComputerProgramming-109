#include <stdio.h>
#include <stdlib.h>
#define M 4
#define N 3
#define P 5
void multi(int a[][N], int b[][P], int C[][P]);

int main()
{
	int C[M][P];

	srand(200);
	int A[M][N];
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			A[i][j] = (rand() % 16) - 5;
		}
	}
	srand(300);
	int B[N][P];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < P; j++)
		{
			B[i][j] = (rand() % 21) - 10;
		}
	}

	multi(A, B, C);

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < P; j++)
		{
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void multi(int a[][N], int b[][P], int c[][P])
{

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < P; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < N; k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
}