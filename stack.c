#include "stack.h"

Stack* NewStack()
{
    Stack* s = malloc(sizeof(Stack));

    s->ll = NewLL();

    return s;
}

void* StackPop(Stack* s) // if return value is 0 then underflow occured
{
    if (s->ll->size < 1) {
        return 0;
    }
    else {
        void* val = s->ll->tail->value;
        LLRemoveLast(s->ll);

        return val;
    }
}

void StackPush(Stack* s, void* v) // no possibility of overflow due to linked list ;)
{
    LLAppend(s->ll, v);
}

void* StackPeek(Stack* s)  // if return value is 0 then underflow occured
{
    if (s->ll->size < 1) {
        return 0;
    }

    return s->ll->head->value;
}

void FreeStack(Stack* s)
{
    FreeLL(s->ll);
    free(s);
}
