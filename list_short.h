#ifndef _CHENG_SHIH_LIST_SHORT_H
#define _CHENG_SHIH_LIST_SHORT_H

typedef struct node // structure: Node 
{ 
	short data; // integer data
	struct node *left, *right; // the pointer of Node: left, right 
}Node; 

typedef Node *NodePtr; 

extern short del( NodePtr *start, NodePtr *current ); // delete function of double linked list
extern void add( NodePtr *start, NodePtr *current, short input ); // add function of double linked list

#endif
