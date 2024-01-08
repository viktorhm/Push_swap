#include"push_swap.h"

static int find_max(t_node *stack)
{
   int  max;

   max = stack->value ;
   while(stack)
   {
    if(stack->value > max)
        max = stack->value;
    stack = stack->next ;
   }
   return(max);
}

void little_sort (t_node **stack)
{
int max_high;

max_high = find_max(*stack);
if((*stack)->value == max_high)
    ra(stack);
else if((*stack)->next->value == max_high)
    rra(stack);
if((*stack)->value > (*stack)->next->value)
    sa(stack);
}