CFLAGC = -Wall -Wextra -Werror
CC = cc
NAME   = push_swap
ARCHIVE = push_swap.a

SRCS = create_stack.c \
 ft_atoi.c \
 init.c\
  littel_sorted.c\
   main.c \
   push.c\
    algo.c\
     reverse_rotate.c\
      rotate.c\
       split.c\
        swap.c\
         utils.c

OBJS	= ${SRCS:.c=.o}

all: $(NAME)


$(NAME): $(ARCHIVE)
	$(CC) $< -o $@

$(ARCHIVE): $(OBJS)
	ar -rcs $(ARCHIVE)  $^

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PONY : all clean fclea re
