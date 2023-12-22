# Queue and stack implemenation
Simple queue and stack implementation using custom linked list implementation in C. The fact that these structures are implemented with a linked list means that an overflow cannot occur.

> Struct fields should never be modified

## Queue
### Queue methods
```c
Queue* NewQueue();
void Enqueue(Queue* q, void* v);
void* Dequeue(Queue* q); // returns 0 if underflow
void* QueuePeek(Queue* q); // returns 0 if underflow
void* FreeQueue(Queue* q);
```
### Queue example
```c
#include <stdio.h>

#include "queue.h"

int main()
{
    Queue* q = NewQueue();

    Enqueue(q, 3);
    Enqueue(q, 2);
    Enqueue(q, 1);

    printf("Dequeued %d\n", Dequeue(q));

    FreeQueue(q);

    return 0;
}
```
## Stack
### Stack methods
```c
Stack* NewStack();
void* StackPop(Stack* s);
void StackPush(Stack* s, void* v); // returns 0 if underflow
void* StackPeek(Stack* s); // returns 0 if underflow
void FreeStack(Stack* s);
```
### Stack example

```c
#include <stdio.h>

#include "stack.h"

int main()
{
    Stack* s = NewStack();

    StackPush(s, "Hello");
    StackPush(s, "World");
    StackPush(s, "Soon to be gone");

    printf("This is gone: %s\n", StackPop(s));

    FreeStack(s);

    return 0;
}
```
