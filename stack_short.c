#include <stdio.h>
#include "list_short.h"

void push( NodePtr *top, short input ) // function push: push the integer input to stack
{
	add( top, top, input );	// use dlist's function "add" 
}

short pop( NodePtr *top ) // function pop: pop the data in top of stack
{
	short temp;

	temp = del( top, top ); // use dlist's function "del"

	return temp;
}
