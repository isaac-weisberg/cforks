#ifndef BLOCKS_H
#define BLOCKS_H

typedef void (*Block)();

void blocks_init();

void blocks_submit(Block block);

void blocks_main();

#endif