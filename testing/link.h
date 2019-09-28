#pragma once

typedef struct node node;

struct node{
	node* next;
	int val;
};

node* createNode(int);
void appendNode(node*, int);