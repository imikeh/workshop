#ifndef _CHENG_SHIH_QUEUE_PTR_TO_CHAR_H
#define _CHENG_SHIH_QUEUE_PTR_TO_CHAR_H

#include "list_ptr_to_char.h"

typedef NodePtr QueueNodePtr; // define QueueNodePtr

void enque( NodePtr *header, NodePtr *tail, char input ); // the prototype of enqueue
char deque( NodePtr *header, NodePtr *tail ); //  the prototype of dequeue

#endif
