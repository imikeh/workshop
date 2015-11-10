#ifndef _CHENG_SHIH_LIST_PTR_TO_CHAR_H
#define _CHENG_SHIH_LIST_PTR_TO_CHAR_H

typedef struct node // structure: Node
{
	char *data; // integer data
	struct node *left, *right; // the pointer of Node: left, right
}Node;

typedef Node *NodePtr;

extern char del( NodePtr *start, NodePtr *current ); // delete function of double linked list
extern void add( NodePtr *start, NodePtr *current, char input ); // add function of double linked list

#endif
