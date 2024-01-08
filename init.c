/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:33:37 by vharatyk          #+#    #+#             */
/*   Updated: 2024/01/03 15:59:22 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void index_init(t_node *a , int nb_value)
{

    t_node *tmp;
    t_node  *max_high;
    int value ;

    while(nb_value > 0)
    {
        tmp = a;
        value = INT_MIN ;
        max_high = NULL;
        while(tmp)
        {
            if(tmp->value == INT_MIN && tmp->index == 0)
                tmp->index = 1;
            if(tmp->value > value && tmp->index == 0)
            {
                value = tmp->value;
                max_high = tmp ;
                tmp = a ;
            }
            else 
                tmp = tmp->next;
        }
        if(max_high != NULL)
            max_high->index = nb_value ;
        nb_value -- ;
    }
    
}