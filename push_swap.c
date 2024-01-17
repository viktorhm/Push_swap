/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:37:17 by vharatyk          #+#    #+#             */
/*   Updated: 2024/01/17 16:59:45 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"



void finish_rotation(t_node **stack , t_node *top_node , char stack_name)
{
	while(*stack != top_node)
	{
		if(stack_name == 'a')
		{
			if(top_node->mediane)
				ra(stack);
			else
				rra(stack);

		}
		else if(stack_name == 'b')
		{
			if(top_node->mediane)
				rb(stack);
			else
				rrb(stack);
		}
	}

}

static void	move_node(t_node **a, t_node **b)
{
	t_node	*cheapest_node;

	cheapest_node = return_cheapest(*b);
	if (cheapest_node->mediane && cheapest_node->target->mediane)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->mediane) && !(cheapest_node->target->mediane))
		reverse_rotate_both(a, b, cheapest_node);
	finish_rotation(b, cheapest_node, 'b');
	finish_rotation(a, cheapest_node->target, 'a');
	pa(a, b);
}





push_swap(t_node **a, t_node **b)
{

	t_node *small ;
	int	len_a ;


	len_a = len_stack(*a);
	if(len_a == 5)
		hand_five(a,b);
	else
	{
		while(len_a-- > 3)
			pb(b , a);
	}
	tiny_sort(a);
	while(*b)
	{
		init_node(a, b);
		move_node(a,b);
	}
	set_current_position(*a);
	small = find_smallest(*a);
	if(small->mediane)
		while(*a != small)
			ra(a);
	else
		while(*a != small)
			rra(a);

}