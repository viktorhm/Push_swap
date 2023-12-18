/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:59:06 by vharatyk          #+#    #+#             */
/*   Updated: 2023/12/18 18:33:58 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int main (int argc , char *argv[])
{
	t_node *a;
	t_node *b;
	a = NULL ;
	b = NULL ;

	if(argc == 1 || argc == 2 && !argv[1][0])
	{
		write(1,"erreur",6);
		return(0);
	}
	if(argc == 2)
	{
		argv = ft_split(argv[1], ' ');
	}
	init_stack(&a , argv );






	return(0);
}

