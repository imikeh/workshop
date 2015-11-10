#ifndef _CHENG_SHIH_STACK_PTR_TO_LONG_H
#define _CHENG_SHIH_STACK_PTR_TO_LONG_H

#include "list_ptr_to_long.h"

typedef NodePtr StackNodePtr; // define StackNodePtr

extern void push( NodePtr *top, long input ); // the prototype of push
extern long pop( NodePtr *top ); // the prototype of pop

#endif
