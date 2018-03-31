#include "queue.h"

Queue* queue_new() {
    Queue* q = malloc(sizeof(Queue));

    queue_init(q);

    return q;
}

void queue_init(Queue* q) {
    return;
}