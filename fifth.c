#include "fifth.h"

int main(int argc, char** argv)
{
	if(argc < 2)
	{
		printf("error\n");
		return 1;
	}
	FILE* f = fopen(argv[1], "r");
	if(f == NULL)
	{
		printf("error\n");
		return 1;
	}
	fscanf(f, "%d\t%d\n", &row, &col);
	int **mat1 = (int **)malloc(row * sizeof(int*));
	int i = 0;
	for(i; i<row; i++)
	{
		mat1[i] = (int*)malloc(col * sizeof(int));
	}
	int **mat2 = (int **)malloc(row * sizeof(int*));
	int j = 0;
	for(j; j<row; j++)
	{
		mat2[j] = (int*)malloc(col * sizeof(int));
	}
	int n1, n2;
	int x = 0;
	for(x; x < row; x++)
	{
		int y = 0;
		for(y; y < col; y++)
		{
			fscanf(f, "%d\t", &n1);
			mat1[x][y] = n1;
		}
	}
	int a = 0;
	for(a; a < row; a++)
	{
		int b = 0;
		for(b; b < col; b++)
		{
			fscanf(f, "%d\t", &n2);
			mat2[a][b] = n2;
		}
	}
	int** result = add(mat1, mat2);
	int d = 0;
	for(d; d < row; d++)
	{
		int e = 0;
		for(e; e < col; e++)
		{
			printf("%d\t", result[d][e]);
		}
		printf("\n");
	}
	return 0;	
}
