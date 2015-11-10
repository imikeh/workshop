#include <stdio.h>
#include "queue_double.h"

void enque( NodePtr *header, NodePtr *tail, double input ) // enqueue function: add a new data in the tail of a queue
{
	add( header, tail, input ); // use dlist's function "add"
}

double deque( NodePtr *header, NodePtr *tail ) // function dequeue: delete a data in the head of a queue
{
	double temp;

	temp = del( tail, header ); // use dlist's function "del"

	return temp;
}
