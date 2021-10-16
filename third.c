#include "third.h"

int main(int argc, char** argv)
{
	if(argc == 1)
	{
		printf("error\n");
		return 1;
	}
	FILE* f = fopen(argv[1], "r");
	if (f == NULL)
	{
		printf("error\n");
		return 1;
	}
	char c;
	int n;
	while(fscanf(f, "%c\t%d\t\n", &c, &n) == 2)
	{
		if(c == 'i')
		{
			Node* nnode = (Node*)malloc(sizeof(Node));
			nnode->val = n;
			nnode->next = NULL;
			insert(nnode);
		}
		else if(c == 'd')
		{
			delete(n);
		}else
		{
			printf("error\n");
			return 0;
		}
	}
	fclose(f);
	printResult();
	return 0;
}
	
