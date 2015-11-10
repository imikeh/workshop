#include <stdio.h>
#include "queue_float.h"

void enque( NodePtr *header, NodePtr *tail, float input ) // enqueue function: add a new data in the tail of a queue
{
	add( header, tail, input ); // use dlist's function "add"
}

float deque( NodePtr *header, NodePtr *tail ) // function dequeue: delete a data in the head of a queue
{
	float temp;

	temp = del( tail, header ); // use dlist's function "del"

	return temp;
}
