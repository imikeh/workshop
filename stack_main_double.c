#include <stdio.h>
#include "stack_double.h"

int main( void )
{
	StackNodePtr top = NULL; // declare a pointer of Stack type 

	double a;

	printf( "Enter a set of number, stop at -999!\n" );

	while( scanf( "%lf", &a ) && a != -999 ) // scan an integer a while a isn't -999
	{
		push( &top, a ); // push a in the stack
	}

	printf( "Output of the stack:\n" );

	while( top != NULL )
		printf( "%lf\n", pop( &top ) ); // output stack

	return 0;
}
