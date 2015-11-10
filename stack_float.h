#ifndef _CHENG_SHIH_STACK_FLOAT_H 
#define _CHENG_SHIH_STACK_FLOAT_H

#include "list_float.h"

typedef NodePtr StackNodePtr; // define StackNodePtr

extern void push( NodePtr *top, float input ); // the prototype of push
extern float pop( NodePtr *top ); // the prototype of pop

#endif
