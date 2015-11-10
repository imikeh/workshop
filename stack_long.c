#include <stdio.h>
#include "list_long.h"

void push( NodePtr *top, long input ) // function push: push the integer input to stack
{
	add( top, top, input );	// use dlist's function "add" 
}

long pop( NodePtr *top ) // function pop: pop the data in top of stack
{
	long temp;

	temp = del( top, top ); // use dlist's function "del"

	return temp;
}
