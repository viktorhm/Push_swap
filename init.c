/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:33:37 by vharatyk          #+#    #+#             */
/*   Updated: 2024/01/09 15:25:07 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


void init_pos_mediane( t_node *stack)
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
		stack->mediane = 1 ;
	else
		stack->mediane = 0 ;

	i++;
	stack = stack->next ;

	}



}