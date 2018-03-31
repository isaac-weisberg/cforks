#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <stddef.h>
#include "block.h"

typedef struct {
    Block* pool;
} Queue;

Queue* queue_new();
void queue_submit(Queue* q, Block* block);

static void queue_init(Queue* q);

#endif
