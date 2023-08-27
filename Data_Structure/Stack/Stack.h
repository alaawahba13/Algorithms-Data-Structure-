#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include "Platform_types.h"
#define MAX_SIZE 5
#define true 1
#define false 0
typedef struct{
   u32 ptr; // stack pointer that is the array index.
   u32 stack_arr[MAX_SIZE];
}Stack;

typedef enum{
  NOK,
  OK,
}ret_status;

ret_status intialize(Stack *my_stack);
ret_status push(Stack *my_stack, u32 data);
ret_status pop(Stack *my_stack, u32 *data);
ret_status top(Stack *my_stack, u32 *data);
void print_stack(Stack *my_stack);
u32 sizee(Stack *my_stack);
static _Bool isFull(Stack *my_stack);
static _Bool isEmpty(Stack *my_stack);

#endif
