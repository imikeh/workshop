#include <stdio.h>
#include "queue_char.h"

char main( void )
{
	QueueNodePtr header = NULL, tail = NULL; // declare two pointer of Queue type

	char input;

	printf( "Enter a set of number, stop at '.'\n" );

	while( scanf( " %c", &input ) && input != '.' ) // scan an integer input while input not equal '.' 
	{
		enque( &header, &tail, input );
	}

	printf( "Output of the queue:\n" );

	while( header != NULL )
		printf( "%c\n", deque( &header, &tail ) ); // output queue


	return 0;
}
