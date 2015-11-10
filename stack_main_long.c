#include <stdio.h>
#include "stack_long.h"

long main( void )
{
	StackNodePtr top = NULL; // declare a pointer of Stack type 

	long a;

	printf( "Enter a set of number, stop at -999!\n" );

	while( scanf( "%ld", &a ) && a != -999 ) // scan an integer a while a isn't -999
	{
		push( &top, a ); // push a in the stack
	}

	printf( "Output of the stack:\n" );

	while( top != NULL )
		printf( "%ld\n", pop( &top ) ); // output stack

	return 0;
}
