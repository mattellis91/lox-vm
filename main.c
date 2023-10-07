#include "common.h"
#include "debug.h"
#include "chunk.h"

#include <stdio.h>

int main(int argc, char *argv[]) {
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);
    disassembleChunk(&chunk, "test chunk");
    freeChunk(&chunk);
    printf("Hello, world!\n");
    return 0;
}