#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int val;
	struct node* next;
} Node;

Node *head = NULL;

void insert(Node *nnode)
{
	int n = nnode->val;
	if(head == NULL)
	{
		head = nnode;
	}else if(head->val > n)
	{
		nnode->next = head;
		head = nnode;
	}else
	{
		Node *temp = head;
		while(temp->next != NULL && n >= temp->next->val)
		{
			temp = temp->next;
		}
		if(temp->val == nnode->val)
		{
			return;
		}
		nnode->next = temp->next;
		temp->next = nnode;
	}
}

void delete(int n)
{
	if(head != NULL && head->val == n)
	{
		head = head->next;
		return;
	}
	Node *prev;
	Node *temp;
	temp = head;
	while(temp != NULL && temp->val != n)
	{
		prev = temp;
		temp = temp->next;
	}
	if(temp == NULL)
	{
		return;
	}else
	{
		prev->next = temp->next;
		free(temp);
	}
}

void printResult()
{
	if(head == NULL)
	{
		printf("\n");
	}
	Node *temp;
	temp = head;
	while(temp != NULL)
	{
		printf("%d\t", temp->val);
		temp = temp->next;
	}
	printf("\n");
}
