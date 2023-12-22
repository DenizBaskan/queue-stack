#include "ll.h"

LinkedList* NewLL()
{
    LinkedList* ll = malloc(sizeof(LinkedList));

    ll->size = 0;

    ll->head = malloc(sizeof(LLNode));
    ll->tail = ll->head;

    ll->head->next = 0;
    ll->tail->next = 0;
    ll->head->prev = 0;
    ll->tail->prev = 0;

    return ll;
}

void LLAppend(LinkedList* ll, void* v)
{
    if (ll->size == 0)
        ll->tail->value = v;
    else {
        LLNode* n = malloc(sizeof(LLNode));

        n->value = v;
        n->next = 0;

        n->prev = ll->tail;

        ll->tail->next = n;
        ll->tail = n;
    }

    ll->size++;
}

void LLRemoveFirst(LinkedList* ll)
{
    if (ll->head->next == 0)
        ll->head->value = 0;
    else {
        LLNode* new_head = ll->head->next;

        free(ll->head);

        ll->head = new_head;
        ll->head->prev = 0;
    }

    ll->size--;
}

void LLRemoveLast(LinkedList* ll)
{
    if (ll->tail->prev == 0)
        ll->tail->value = 0;
    else {
        LLNode* prev = ll->tail->prev;
        prev->next = 0;

        free(ll->tail);

        ll->tail = prev;
    }

    ll->size--;
}

void FreeLL(LinkedList* ll)
{
    LLNode* head = ll->head;
    printf("Size: %d\n", ll->size);

    if (ll->size != 0) {
        while (head != 0) {
            //free(head);
            printf("Value: %d, next: %p, prev: %p\n", head->value, head->next, head->prev);
            head = head->next;
        }
    }

    free(ll);
}
