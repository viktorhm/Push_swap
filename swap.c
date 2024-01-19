/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:37:17 by vharatyk          #+#    #+#             */
/*   Updated: 2024/01/19 16:32:30 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"



//sa ntervertit les 2 premiers éléments au sommet de la pile a.Ne fait rien s’il n’y en a qu’un ou aucun.
int swap(t_node **head)
{

	if((*head) == NULL || (*head)->next == NULL )
		return(1);

	long fiste ;
	long second;

	fiste = (*head)->value;
	second = (*head)->next->value;

	(*head)->next->value = fiste ;
	(*head)->value = second ;
	return(0);
}

void sa(t_node **a)
{
	swap(a);
	write(1,"sa\n",3);
}
void sb(t_node **b)
{
	swap(b);
	write(1,"sb\n",3);
}
void ss(t_node **a , t_node **b)
{
	swap(a);
	swap(b);
	write(1,"ss\n",3);

}
