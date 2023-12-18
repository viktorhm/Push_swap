#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_node
{
	int value ;
	struct s_node *next;
	struct s_node *prev;

}t_node;

long int	ft_atoi(const char *str );
char	**ft_split(char const *s, char c);
void init_stack(t_node **a , char **argv );



#endif