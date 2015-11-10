#include <stdio.h>
#include <stdlib.h>
#include "mm.h"

void *my_malloc( size_t size )
{
	void *temp = malloc( size );
	


	if( !temp )
	{
		printf( "Out of memory!\n" );
		temp = NULL;
	}
	else if( !size )
	{
		printf( "Size error!" );
		temp = malloc(1);
	}

	return temp;
}

void *my_calloc( size_t num, size_t size )
{
	void *temp = calloc( num, size );

	if( !temp )
	{
		printf( "Out of memory\n" );
		temp = NULL;
	}
	else if( !size || !num )
	{
		printf( "Size error\n" );
		temp = calloc( 1, 1 ); 
	}

	return temp;
}

void *my_realloc( void *ptr, size_t size )
{
	return realloc( ptr, size );
}

void my_free( void *ptr )
{
	if( !ptr )
		free( ptr );
}
