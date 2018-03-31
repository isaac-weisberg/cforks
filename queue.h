/* 
    So the goal of the pools existense is to rotate, essentially
 */

#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <stddef.h>
#include "block.h"

typedef struct {
    Block* pool;
    int pool_length;
} Queue;

Queue* queue_new();
void queue_submit(Queue* q, Block* block);

#endif
