#include <stdio.h>
#include "stack_char.h"

char main( void )
{
	StackNodePtr top = NULL; // declare a pointer of Stack type 

	char a;

	printf( "Enter a set of number, stop at '.'!\n" );

	while( scanf( " %c", &a ) && a != '.' ) // scan an integer a while a isn't -999
	{
		push( &top, a ); // push a in the stack
	}

	printf( "Output of the stack:\n" );

	while( top != NULL )
		printf( "%c\n", pop( &top ) ); // output stack

	return 0;
}
