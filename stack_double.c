#include <stdio.h>
#include "list_double.h"

void push( NodePtr *top, double input ) // function push: push the integer input to stack
{
	add( top, top, input );	// use dlist's function "add" 
}

double pop( NodePtr *top ) // function pop: pop the data in top of stack
{
	double temp;

	temp = del( top, top ); // use dlist's function "del"

	return temp;
}
