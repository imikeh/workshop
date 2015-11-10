#ifndef _CHENG_SHIH_LIST_PTR_TO_INT_H
#define _CHENG_SHIH_LIST_PTR_TO_INT_H

typedef struct node // structure: Node 
{ 
	int *data; // pointer to integer data
	struct node *left, *right; // the pointer of Node: left, right 
}Node; 

typedef Node *NodePtr; 

extern int del( NodePtr *start, NodePtr *current ); // delete function of double linked list
extern void add( NodePtr *start, NodePtr *current, int input ); // add function of double linked list

#endif
