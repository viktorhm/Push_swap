/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:45:51 by vharatyk          #+#    #+#             */
/*   Updated: 2023/12/19 15:29:17 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"push_swap.h"


void free_stack(t_node *stack)
{
	t_node *next_node ;

	if(stack == NULL)
		return ;
	while(stack)
	{
		next_node = stack->next;
		free(stack);
		stack = next_node ;
	}
	stack = NULL;
}




t_node *find_last_node(t_node *stack)
{
if(stack == NULL)
	return(NULL);
while(stack->next)
	stack = stack ->next ;
return(stack);

}


void add_node(t_node **stack , int nbr)
{
	t_node *node ;
	t_node *last_node;

	if(NULL == stack)
		return ;
	node  = malloc(sizeof(t_node));
	if(node == NULL)
		return ;

	node->next= NULL;
	node->value = nbr;
	if(*stack == NULL)
	{
		*stack = node ;
		node->prev = NULL ;
	}
	else
	{
		last_node = find_last_node(*stack);
		last_node->next = node ;
		node->prev = last_node ;
	}
}

int error_char(char *argv)
{
	int i;
	i = 0 ;
	while(argv[i])
	{
		if(argv[i] > '0' && argv[i] < '9')
			return(0);
		else
			return(1);
	}

}

int not_repet(int nbr , t_node *a)
{
	if(a == NULL)
		return(0);
	while(a)
	{
		if(a->value == nbr)
			return(1);
		a = a->next ;
	}
	return(0);
}



int init_stack(t_node **a , char **argv, int leak )
{
	int  i = 0 ; int long nbr;
	while(argv[i])
	{
		if(error_char(argv[i]))
			write(1,"char",4);

		nbr = ft_atoi(argv[i]);
		printf("%ld ",nbr);
		if(nbr > 2147483647 && nbr < -2147483648)
		{
			free_stack(*a);
			return(0);

		}
		if(not_repet(nbr , *a))
		{
			free_stack(*a);
			return(0);
		}
		else
			add_node(a, (int)nbr);
		i++;
	}
	return(i);
}

int print_node(t_node *stack)
{

while(stack)
{
	printf("node nbr->%d , ", stack->value);
	stack = stack->next;

}
	printf("\n");
	return(0);
}