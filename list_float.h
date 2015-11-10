#ifndef _CHENG_SHIH_LIST_FLOAT_H
#define _CHENG_SHIH_LIST_FLOAT_H

typedef struct node // structure: Node 
{ 
	float data; // integer data
	struct node *left, *right; // the pointer of Node: left, right 
}Node; 

typedef Node *NodePtr; 

extern float del( NodePtr *start, NodePtr *current ); // delete function of double linked list
extern void add( NodePtr *start, NodePtr *current, float input ); // add function of double linked list

#endif
