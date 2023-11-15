#ifndef CHIP8STACK_h
#define CHIP8STACK_H
#include "config.h"

struct chip8;
struct chip8_stack
{
    unsigned short stack[CHIP8_TOTAL_STACK_DEPTH];
};

#endif