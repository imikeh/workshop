#ifndef _CHENG_SHIH_LIST_DOUBLE_H
#define _CHENG_SHIH_LIST_DOUBLE_H

typedef struct node // structure: Node 
{ 
	double data; // integer data
	struct node *left, *right; // the pointer of Node: left, right 
}Node; 

typedef Node *NodePtr; 

extern double del( NodePtr *start, NodePtr *current ); // delete function of double linked list
extern void add( NodePtr *start, NodePtr *current, double input ); // add function of double linked list

#endif
