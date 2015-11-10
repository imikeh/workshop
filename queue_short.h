#ifndef _CHENG_SHIH_QUEUE_SHORT_H
#define _CHENG_SHIH_QUEUE_SHORT_H

#include "list_short.h"

typedef NodePtr QueueNodePtr; // define QueueNodePtr

void enque( NodePtr *header, NodePtr *tail, short input ); // the prototype of enqueue
short deque( NodePtr *header, NodePtr *tail ); //  the prototype of dequeue

#endif
