SRC_DIR = src
LIBFT_DIR = libft
PRINTF_DIR = printf
LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

SRCS			=	$(SRC_DIR)/operations/ft_push_a.c\
					$(SRC_DIR)/operations/ft_push_b.c\
					$(SRC_DIR)/operations/ft_reverse_a.c\
					$(SRC_DIR)/operations/ft_reverse_b.c\
					$(SRC_DIR)/operations/ft_rotate_a.c\
					$(SRC_DIR)/operations/ft_rotate_b.c\
					$(SRC_DIR)/operations/ft_rr.c\
					$(SRC_DIR)/operations/ft_rrr.c\
					$(SRC_DIR)/operations/ft_swap_a.c\
					$(SRC_DIR)/operations/ft_swap_b.c\
					$(SRC_DIR)/operations/ft_swap_ab.c\
					$(SRC_DIR)/algorithm/ft_atoi.c\
					$(SRC_DIR)/algorithm/push_swap.c\
					$(SRC_DIR)/algorithm/utils.c\
					$(SRC_DIR)/algorithm/utils2.c
OBJS			=	$(SRCS:.c=.o)

CC			=	cc
RM			=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -I includes -I $(LIBFT_DIR) -I $(PRINTF_DIR)

NAME			=	push_swap

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBFT) $(PRINTF)
				$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
				make -C $(LIBFT_DIR)

$(PRINTF):
				make -C $(PRINTF_DIR)

clean:
				$(RM) $(OBJS)
				make -C $(LIBFT_DIR) clean
				make -C $(PRINTF_DIR) clean

fclean:		clean
			$(RM) $(NAME)
			make -C $(LIBFT_DIR) fclean
			make -C $(PRINTF_DIR) fclean

re:			fclean $(NAME)

.PHONY:			all clean fclean re
