
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

t_node  *find_small(t_node *node)
{

	long	smallest;
	t_node *smallest_node;

	if(NULL == node)
		return(NULL);
	smallest = __LONG_MAX__;

	while(node)
	{
		if(node->value < smallest)
		{
			smallest = node->value ;
			smallest_node =  node ;
		}
		node = node ->next ;
	}
	retun(smallest_node);

}


t_node *return_cheapest(t_node *node)
{
	if(NULL == node)
		return(NULL);
	while(node)
	{

		if(node->min)
			return(node);
		node = node->next;
	}

	return(NULL);

}
