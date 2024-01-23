/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:33:37 by vharatyk          #+#    #+#             */
/*   Updated: 2024/01/20 10:52:57 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"



void init_pos(t_node *stack)
{

	if(stack == NULL)
		return ;

	int i = 0 ;
	int mediane =0 ;

	mediane  = len_stack(stack) / 2;
	while(stack)
	{
	stack->current_position = i ;
	if( i <= mediane )
		stack->mediane = true ;
	else
		stack->mediane = false ;
	stack = stack->next ;
	i++;
	}

}

static void set_node (t_node *a , t_node *b)
{
	t_node *tmp_a = a;
	t_node *target;
	long	best;

	while(b)
	{
		best = LONG_MAX;
		tmp_a = a;
		while(tmp_a)
		{
			if(tmp_a->value > b->value && tmp_a->value < best)
				{
					best = tmp_a->value;
					target = tmp_a;
				}
				tmp_a = tmp_a->next ;
		}
		if(LONG_MAX == best)
			b->target = find_small(a);
		else
			b->target = target ;

		b = b->next ;
	}

}

void set_price(t_node *a , t_node *b)
{
	int len_a;
	int len_b;

	len_a = len_stack(a);
	len_b = len_stack(b);

	while(b)
	{
		b->push_price = b->current_position;
		if(!(b->mediane))
			b->push_price = len_b - (b->current_position);
		if(b->target->mediane)
			b->push_price += b->target->current_position;
		else
			b->push_price += len_a - (b->target->current_position);
		b = b->next;
	}

}


void set_min(t_node *b)
{

	long	best_match_value ;
	t_node	*best_match_node ;

	if(NULL == b)
		return ;
	best_match_value = 9223372036854775807;

	while(b)
	{
		if(b->push_price < best_match_value)
		{
			best_match_value = b->push_price ;
			best_match_node =b;
		}
		b = b -> next ;
	}
	best_match_node->min = 1;

}


void init_nodes(t_node *a , t_node *b)
{
	init_pos(a);
	init_pos(b);
	set_node(a,b);
	set_price(a,b);
	set_min(b);
}