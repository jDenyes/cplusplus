#include "link.h"

node* createNode(int data) {
    node* head = new node;
	head->next = nullptr;
	head->val = data;
    return head;
}

void appendNode(node* head, int data) {
    node* newNode = createNode(data);
    head->next = newNode;
}