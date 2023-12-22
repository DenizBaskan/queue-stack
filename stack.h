#ifndef STACK_H
#define STACK_H

#include <stdlib.h>

#include "ll.h"

typedef struct {
    LinkedList* ll;
} Stack;

Stack* NewStack();
void* StackPop(Stack* s);
void StackPush(Stack* s, void* v);
void* StackPeek(Stack* s);
void FreeStack(Stack* s);

#endif
