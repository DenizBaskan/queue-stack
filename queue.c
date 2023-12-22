#include "queue.h"

Queue* NewQueue()
{
    Queue* q = malloc(sizeof(Queue));

    q->ll = NewLL();

    return q;
}

void Enqueue(Queue* q, void* v)
{
    LLAppend(q->ll, v);
}

void* Dequeue(Queue* q)
{
    void* val = q->ll->head->value;

    LLRemoveFirst(q->ll);

    return val;
}

void* QueuePeek(Queue* q)
{
    return q->ll->head->value;
}

void* FreeQueue(Queue* q)
{
    FreeLL(q->ll);
    free(q);
}
