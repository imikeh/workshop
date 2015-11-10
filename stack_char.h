#ifndef _CHENG_SHIH_STACK_CHAR_H 
#define _CHENG_SHIH_STACK_CHAR_H

#include "list_char.h"

typedef NodePtr StackNodePtr; // define StackNodePtr

extern void push( NodePtr *top, char input ); // the prototype of push
extern char pop( NodePtr *top ); // the prototype of pop

#endif
