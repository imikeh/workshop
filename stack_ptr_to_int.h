#ifndef _CHENG_SHIH_STACK_PTR_TO_INT_H
#define _CHENG_SHIH_STACK_PTR_TO_INT_H

#include "list_ptr_to_int.h"

typedef NodePtr StackNodePtr; // define StackNodePtr

extern void push( NodePtr *top, int input ); // the prototype of push
extern int pop( NodePtr *top ); // the prototype of pop

#endif
