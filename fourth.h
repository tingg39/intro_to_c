#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct hashtable
{
	bool used[1000];
	int val[1000];
} htable;

int hashNumber(int n)
{
	return (n % 1000);
}

bool insert(int n, htable* table)
{
	int index = hashNumber(n);
	while(table->used[index] == true && index < 1000)
	{
		if(table->val[index] == n)
		{
			return false;
		}else
		{
			index++;
		}
	}
	if(index == 1000)
	{
		return false;
	}
	table->val[index] = n;
	table->used[index] = true;
	return true;
}

bool search(int n, htable* table)
{
	int index = hashNumber(n);
	while(table->used[index] == true && index < 1000)
	{
		if(table->val[index] == n)
		{
			return true;
		}else
		{
			index++;
		}
	}
	return false;
}
