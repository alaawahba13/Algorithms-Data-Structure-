#include "Stack.h"

/** @brief intialize the stack pointer
 * @param  my_stack
 * @return value to indicate if it's intialized
 */

ret_status intialize(Stack *my_stack)
{
    ret_status ret;
    if(my_stack == NULL)
    {
        ret =NOK;
    }
    else
    {
		// stack pointer points to top of empty stack 
        my_stack->ptr = -1;
        ret = OK;
    }
    return ret;

}

static _Bool isFull(Stack *my_stack)
{
    if(my_stack->ptr == MAX_SIZE-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

static _Bool isEmpty(Stack *my_stack)
{
    if(my_stack->ptr == -1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

ret_status push(Stack *my_stack, u32 data)
{
    ret_status ret = NOK;
    if(my_stack == NULL || isFull(my_stack) == true )
    {
        printf("Failed to push");
        ret = NOK;
    }
    else
    {
        my_stack->ptr++;
        my_stack->stack_arr[my_stack->ptr] = data;
        ret = OK;

    }
    return ret;
}

ret_status pop(Stack *my_stack, u32 *data)
{
    ret_status ret = NOK;
    if(my_stack == NULL || isEmpty(my_stack) == true)
    {
        printf("Failed to pop");
        ret = NOK;
    }
    else
    {
        *data = my_stack->stack_arr[my_stack->ptr];
        my_stack->ptr--;
        printf("Value popped is %i\n", *data);
        ret = OK;
    }
    return ret;
}
ret_status top(Stack *my_stack, u32 *data)
{
    ret_status ret = NOK;
    if(my_stack == NULL || isEmpty(my_stack) == true)
    {
        printf("No top found");
        ret = NOK;
    }
    else
    {
        *data = my_stack->stack_arr[my_stack->ptr];
        printf("Top Value is %i\n", *data);
        ret = OK;
    }
    return ret;
}
void print_stack(Stack *my_stack)
{
    if((my_stack == NULL) || (isEmpty(my_stack) == true))
    {
        printf("Error");
    }
    else
    {
      printf("Stack values : ");
      for(u32 i=my_stack->ptr; i>0 ; i--){
        printf("%d ", my_stack->stack_arr[i]);
      }

    }
}
u32 sizee(Stack *my_stack)
{
    u32 size=0;
    if(my_stack == NULL )
    {
        printf("Error");
    }
    else
    {
        size = my_stack->ptr +1;
    }
    return size;
}
