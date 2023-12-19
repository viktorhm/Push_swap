/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:59:06 by vharatyk          #+#    #+#             */
/*   Updated: 2023/12/19 16:49:53 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int free_argv(char **argv  ,int leak)
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

	while (stack)
	{
	if (min <= stack->value)
		stack = stack -> next;
	else
		return (1);
	}
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

	print_node(a);
	print_node(b);

	while(ordenar(a ,nb_value))
	{
		printf("--not--");
		break;
	}
	sa(a);
	pa(&a , &b);

	print_node(a);
	print_node(b);




	free_stack(a);
	return(0);
}

