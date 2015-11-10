#include <stdio.h>
#include "queue_short.h"

short main( void )
{
	QueueNodePtr header = NULL, tail = NULL; // declare two pointer of Queue type

	short input;

	printf( "Enter a set of number, stop at -999\n" );

	while( scanf( "%hd", &input ) && input != -999 ) // scan an integer input while input not equal -999
	{
		enque( &header, &tail, input );
	}

	printf( "Output of the queue:\n" );

	while( header != NULL )
		printf( "%hd\n", deque( &header, &tail ) ); // output queue


	return 0;
}
