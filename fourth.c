#include "fourth.h"

int main(int argc, char** argv)
{
	if(argc < 2)
	{
		printf("error\n");
		return 1;
	}
	htable *table;
	FILE *f = fopen(argv[1], "r");
	if(f == NULL)
	{
		printf("error\n");
		return 1;
	}else
	{
		char c;
		int n;
		while(fscanf(f, "%c\t%d\t\n", &c, &n) == 2)
		{
			if(c == 'i')
			{
				if(insert(n, table) == true)
				{
					printf("inserted\n");
				}else
				{
					printf("duplicate\n");
				}
			}else if(c == 's')
			{
				if(search(n, table) == true)
				{
					printf("present\n");
				}else
				{
					printf("absent\n");
				}
			}else
			{
				printf("error\n");
			}
		}
	}
	fclose(f);
	return 0;
}	
