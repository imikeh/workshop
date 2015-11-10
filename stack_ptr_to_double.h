#ifndef _CHENG_SHIH_STACK_PTR_TO_DOUBLE_H
#define _CHENG_SHIH_STACK_PTR_TO_DOUBLE_H

#include "list_ptr_to_double.h"

typedef NodePtr StackNodePtr; // define StackNodePtr

extern void push( NodePtr *top, double input ); // the prototype of push
extern double pop( NodePtr *top ); // the prototype of pop

#endif
