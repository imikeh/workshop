#include <stdio.h>
#include "stack_short.h"

short main( void )
{
	StackNodePtr top = NULL; // declare a pointer of Stack type 

	short a;

	printf( "Enter a set of number, stop at -999!\n" );

	while( scanf( "%hd", &a ) && a != -999 ) // scan an integer a while a isn't -999
	{
		push( &top, a ); // push a in the stack
	}

	printf( "Output of the stack:\n" );

	while( top != NULL )
		printf( "%hd\n", pop( &top ) ); // output stack

	return 0;
}
