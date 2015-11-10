#include <stdio.h>
#include "queue_int.h"

void enque( NodePtr *header, NodePtr *tail, int input ) // enqueue function: add a new data in the tail of a queue
{
	add( header, tail, input ); // use dlist's function "add"
}

int deque( NodePtr *header, NodePtr *tail ) // function dequeue: delete a data in the head of a queue
{
	int temp;

	temp = del( tail, header ); // use dlist's function "del"

	return temp;
}
