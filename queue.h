#ifndef QUEUE_H
#define QUEUE_H

#include "blocks.h"

typedef struct {
    Block* pool;
    
} Queue;

Queue* queue_new();

static void queue_init(Queue* q);

#endif