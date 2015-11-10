#include <stdio.h>
#include "queue_long.h"

void enque( NodePtr *header, NodePtr *tail, long input ) // enqueue function: add a new data in the tail of a queue
{
	add( header, tail, input ); // use dlist's function "add"
}

long deque( NodePtr *header, NodePtr *tail ) // function dequeue: delete a data in the head of a queue
{
	long temp;

	temp = del( tail, header ); // use dlist's function "del"

	return temp;
}
