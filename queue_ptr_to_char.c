#include <stdio.h>
#include "queue_ptr_to_char.h"

void enque( NodePtr *header, NodePtr *tail, char input ) // enqueue function: add a new data in the tail of a queue
{
	add( header, tail, input ); // use dlist's function "add"
}

char deque( NodePtr *header, NodePtr *tail ) // function dequeue: delete a data in the head of a queue
{
	char temp;

	temp = del( tail, header ); // use dlist's function "del"

	return temp;
}
