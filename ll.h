#ifndef LL_H
#define LL_H

#include <stdlib.h>
#include <stdio.h>

typedef struct LLNode LLNode;

struct LLNode {
    void*   value;
    LLNode* next;
    LLNode* prev;
};

typedef struct {
    LLNode* head;
    LLNode* tail;
    int     size;
} LinkedList;

LinkedList* NewLL();
void LLAppend(LinkedList* ll, void* v);
void LLRemoveFirst(LinkedList* ll);
void LLRemoveLast(LinkedList* ll);
void FreeLL(LinkedList* ll);

#endif
