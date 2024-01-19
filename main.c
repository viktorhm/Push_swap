/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:59:06 by vharatyk          #+#    #+#             */
/*   Updated: 2024/01/19 17:23:54 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void free_argv(char **argv  ,int leak)
{
int i = 0 ;
int j = 0 ;
if(leak == 1)
	{
		while(argv[j])
		{
			free(argv[j]);
			j++;
		}
		free(argv);
	}

}

int ordenar(t_node *stack ,int nb_value)
{
	int min = stack->value;
	int i = 0 ;
	while (stack)
	{
	if (min <= stack->value)
	{
		min = stack->value;
		i++;
		stack = stack -> next;
	}
	else
		return(1);
	}
	if(i != nb_value)
		return(1);
	return(0);
}


int main (int argc , char *argv[])
{
	t_node *a;
	t_node *b;
	int nb_value;

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
		nb_value = init_stack(&a , argv, 1 );
		free_argv(argv ,1);
	}
	else
		nb_value = init_stack(&a , argv + 1 , 0 );


	if(nb_value != 0)
	{
		if(nb_value == 2 && ordenar(a ,nb_value))
			sa(&a);

		else if(nb_value == 3 && ordenar(a ,nb_value))
			little_sort(&a);

		else
			push_swap(&a , &b);

		free_stack(a);
		free_stack(b);
	}



	return(0);
}

