/* 
    So the goal of the pools existense is to rotate, essentially

    ATM w/o dynamic relocations :(
 */

#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <stddef.h>
#include "block.h"

typedef struct {
    Block* pool;
    int pool_length;
    int submition_index;
    int execution_index;
} Queue;

Queue* queue_new();
void queue_submit(Queue* q, Block* block);

#endif
