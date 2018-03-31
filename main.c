// #include <stdlib.h>
#include <stdio.h>

#include "blocks.h"
#include "run.h"

void main() {
    blocks_init();

    blocks_submit(run);
    blocks_submit(run);
    blocks_submit(hugh);

    blocks_submit(fun);
    blocks_submit(fun);
    blocks_submit(hugh);
    blocks_submit(run);

    blocks_main();

    printf("Program end.\n");
}


