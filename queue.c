#include "queue.h"

const int BLOCK_POOL_INIT_SIZE = 10;

size_t SIZE_OF_QUEUE = sizeof(Queue);

Queue* queue_new() {
    Queue* q = malloc(sizeof(Queue));

    queue_init(q);

    return q;
}

void queue_submit(Queue* q, Block* block) {
    
}

// MARK: - Static functions
void queue_init(Queue* q) {
    (*q).pool = malloc(BLOCK_POOL_INIT_SIZE * SIZE_OF_BLOCK);
}
