#ifndef _CHENG_SHIH_QUEUE_PTR_TO_FLOAT_H
#define _CHENG_SHIH_QUEUE_PTR_TO_FLOAT_H

#include "list_ptr_to_float.h"

typedef NodePtr QueueNodePtr; // define QueueNodePtr

void enque( NodePtr *header, NodePtr *tail, float input ); // the prototype of enqueue
float deque( NodePtr *header, NodePtr *tail ); //  the prototype of dequeue

#endif
