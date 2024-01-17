
#include"push_swap.h"



int len_stack(t_node *stack)
{
	int i = 0 ;
	while(stack)
	{
		stack = stack->next ;
		i++;
	}
}
