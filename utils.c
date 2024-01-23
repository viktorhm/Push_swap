
#include"push_swap.h"



int len_stack(t_node *stack)
{
	int i = 0 ;
	if(NULL == stack)
		return(0);
	while(stack)
	{
		i++;
		stack = stack->next ;

	}
	return(i);
}

static int find_max(t_node *node)
{
   int  max;

	if(NULL == node)
		return(NULL);
	max = LONG_MAX;

   while(node)
   {
    if(stack->value > max)
        max = stack->value;
    stack = stack->next ;
   }
   return(max);
}


t_node  *find_small(t_node *node)
{

	long	min;
	t_node *smallest_node;

	if(NULL == node)
		return(NULL);
	min = LONG_MAX;

	while(node)
	{
		if(node->value < min)
		{
			min = node->value ;
			smallest_node =  node ;
		}
		node = node ->next ;
	}
	return(smallest);

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
