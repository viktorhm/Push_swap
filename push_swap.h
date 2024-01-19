#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>


typedef struct s_node
{
	int	value ;
	int	current_position ;
	int	push_price;

	bool	mediane;
	bool	min;

	struct s_node *target ;
	struct s_node *next;
	struct s_node *prev;

}t_node;




long int	ft_atoi(const char *str );
char	**ft_split(char const *s, char c);
t_node *find_last_node(t_node *stack);
void add_node(t_node **stack , int nbr);
int error_char(char *argv);
int not_repet(int nbr , t_node *a);
int init_stack(t_node **a , char **argv, int leak );
int print_node(t_node *stack);
void free_stack(t_node *stack);
int len_stack(t_node *stack);
void init_pos( t_node *stack);
void finish_rotation(t_node **stack , t_node *top_node , char stack_name);
void push_swap(t_node **a, t_node **b);
void set_price(t_node *a , t_node *b);
void set_min(t_node *b);
void init_nodes(t_node *a , t_node *b);
void    littel_five(t_node **a , t_node **b);
t_node  *find_small(t_node *node);
t_node *return_cheapest(t_node *node);
void little_sort (t_node **stack);



void sa(t_node **head);
void sb(t_node **head);
void ss(t_node **a , t_node **b);
void pa(t_node **a , t_node **b);
void pb(t_node **a , t_node **b);
void ra (t_node **a);
void rb (t_node **b);
void rr (t_node **a ,t_node **b);
void rra (t_node **a);
void rrb (t_node **b);
void rrr(t_node **a , t_node **b);

void little_sort (t_node **a);

#endif