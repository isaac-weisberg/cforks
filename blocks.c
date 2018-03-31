#include <stdlib.h>
#include "blocks.h"

void _trampoline();

const int QUEUE_LENGTH = 20;

Block* blocks;
int blk_index = 0;
int run_index = 0;

void blocks_init() {
    _trampoline();
}

void _trampoline() {
    blocks = malloc(sizeof(Block) * QUEUE_LENGTH);
}

void blocks_submit(Block block) {
    if (blk_index < QUEUE_LENGTH) {
        blocks[blk_index] = block;
        blk_index++;
    }
}

void blocks_main() {
    while (run_index < QUEUE_LENGTH) {
        Block block = blocks[run_index];
        block();
        run_index++;
    }
}