#include <stdio.h> 
#include "list_int.h"
#include "mm.h"

int del( NodePtr *start, NodePtr *current ) // delete function 
{ 
	if( *current == NULL ) // if the pointer of current Node is NULL
	{
		printf( "delete error" ); // show the error message
		return -1;
	}
	
	if( (*current)->right != NULL ) 
		(*current)->right->left = (*current)->left;
	
	if( (*current)->left != NULL )
		(*current)->left->right = (*current)->right;

	NodePtr temp;
	temp = *current; 
	
	// change the current Node
	if( temp->left != NULL )
		*current = temp->left;
	else if( temp->right != NULL )
	{
		*current = temp->right;
		*start = *current;
	}
	else // if current Node is last Node in the list
	{
		*current = NULL;
		*start = NULL;
	}

	int value = temp->data; // hold the return value

	my_free( temp ); 

	return value;
}

void add( NodePtr *start, NodePtr *current, int input ) // add function
{
	if( *current == NULL ) // if the current Node is NULL
	{
		*start = (NodePtr) my_malloc( sizeof( Node ) ); // make a new Node in dlist
		
		// set the start Node
		(*start)->data = input;
		(*start)->right = NULL;
		(*start)->left = NULL;

		*current = *start; // start node is current node

		return;
	}
	else
	{
		NodePtr newptr;

		newptr = (NodePtr) my_malloc( sizeof( Node ) );
		
		// set the new Node
		newptr->data = input;
		newptr->right = NULL;
		newptr->left = NULL;

		(*current)->right = newptr;
		newptr->left = *current;

		*current = newptr;

		return;
	}
}
