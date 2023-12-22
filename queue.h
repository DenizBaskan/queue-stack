#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>

#include "ll.h"

typedef struct {
    LinkedList* ll;
} Queue;

Queue* NewQueue();

void Enqueue(Queue* q, void* v);
void* Dequeue(Queue* q);
void* QueuePeek(Queue* q);
void* FreeQueue(Queue* q);

#endif
