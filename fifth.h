#include <stdio.h>
#include <stdlib.h>

int row = 0;
int col = 0;

int **add(int** mat1, int** mat2)
{
	int **mat3 = (int **)malloc(row *sizeof(int *));
	int i = 0;
	for(i; i < row; i++)
	{
		mat3[i] = (int *)malloc(col * sizeof(int));
	}
	int r = 0;
	for(r; r < row; r++)
	{
		int c = 0;
		for(c; c < col; c++)
		{
			mat3[r][c] = mat1[r][c] + mat2[r][c];
		}
	}
	return mat3;
}
