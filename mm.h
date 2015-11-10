#ifdef _ChengShih_MMANAGE_H
#define _ChengShih_MMANAGE_H

extern void *my_malloc( size_t size );
extern void *my_calloc( size_t num, size_t size );
extern void *my_realloc( void *ptr, size_t size );
extern void my_free( void *ptr );

#endif
