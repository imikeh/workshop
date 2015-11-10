#ifndef _CHENG_SHIH_LIST_PTR_TO_LONG_H
#define _CHENG_SHIH_LIST_PTR_TO_LONG_H

typedef struct node // structure: Node
{
	long *data; // integer data
	struct node *left, *right; // the pointer of Node: left, right
}Node;

typedef Node *NodePtr;

extern long del( NodePtr *start, NodePtr *current ); // delete function of double linked list
extern void add( NodePtr *start, NodePtr *current, long input ); // add function of double linked list

#endif
