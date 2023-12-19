/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:24:01 by vharatyk          #+#    #+#             */
/*   Updated: 2023/12/19 18:26:32 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"


int push(t_node **dest , t_node *src)
{
	t_node *tmp ;
	if(src == NULL)
		return(1);
	src->next = *dest ;

	*src = (*src)->prev = NULL ;
	if(*src)
		(*src)->prev = NULL ;
	tmp->prev =NULL;
	if(*dest == NULL)
	{
		*dest = tmp;
		tmp-> next = NULL ;
	}
	else
	{
		tmp->next = *dest ;
		tmp->next->prev = tmp ;
		*dest = tmp ;
	}

}

void pa(t_node **a , t_node **b)
{
	push(a , b);
	write(1,"pa\n",4);
}
void pb(t_node **a , t_node **b)
{
	push(b , a);
	write(1,"pb\n",4);
}
