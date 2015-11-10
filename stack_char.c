#include <stdio.h>
#include "list_char.h"

void push( NodePtr *top, char input ) // function push: push the integer input to stack
{
	add( top, top, input );	// use dlist's function "add" 
}

char pop( NodePtr *top ) // function pop: pop the data in top of stack
{
	char temp;

	temp = del( top, top ); // use dlist's function "del"

	return temp;
}
