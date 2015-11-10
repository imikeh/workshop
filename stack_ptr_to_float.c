#include <stdio.h>
#include "list_ptr_to_float.h"

void push( NodePtr *top, float input ) // function push: push the integer input to stack
{
	add( top, top, input );	// use dlist's function "add"
}

float pop( NodePtr *top ) // function pop: pop the data in top of stack
{
	float temp;

	temp = del( top, top ); // use dlist's function "del"

	return temp;
}
