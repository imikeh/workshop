#ifndef _CHENG_SHIH_STACK_PTR_TO_SHORT_H
#define _CHENG_SHIH_STACK_PTR_TO_SHORT_H

#include "list_ptr_to_short.h"

typedef NodePtr StackNodePtr; // define StackNodePtr

extern void push( NodePtr *top, short input ); // the prototype of push
extern short pop( NodePtr *top ); // the prototype of pop

#endif
