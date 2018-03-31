#include "queue.h"

const int BLOCK_POOL_INIT_SIZE = 10;

size_t SIZE_OF_QUEUE = sizeof(Queue);

static void queue_init(Queue* q);

Queue* queue_new() {
    Queue* q = malloc(sizeof(Queue));

    queue_init(q);

    return q;
}

/*
    Submit a block on a queue
*/
void queue_submit(Queue* q, Block* block) {
    
}

/*
    Initialize freshly allocated instance of Queue

    Should not be called more than once per object
*/
static void queue_init(Queue* q) {
    (*q).pool = malloc(BLOCK_POOL_INIT_SIZE * SIZE_OF_BLOCK);
    (*q).pool_length = BLOCK_POOL_INIT_SIZE;
    (*q).submition_index = 0;
}
