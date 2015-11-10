#include <stdio.h>
#include "list_ptr_to_int.h"

void push( NodePtr *top, int input ) // function push: push the integer input to stack
{
	add( top, top, input );	// use dlist's function "add"
}

int pop( NodePtr *top ) // function pop: pop the data in top of stack
{
	int temp;

	temp = del( top, top ); // use dlist's function "del"

	return temp;
}
