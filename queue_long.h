#ifndef _CHENG_SHIH_QUEUE_LONG_H
#define _CHENG_SHIH_QUEUE_LONG_H

#include "list_long.h"

typedef NodePtr QueueNodePtr; // define QueueNodePtr

void enque( NodePtr *header, NodePtr *tail, long input ); // the prototype of enqueue
long deque( NodePtr *header, NodePtr *tail ); //  the prototype of dequeue

#endif
