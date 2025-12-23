/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:20:49 by aarogarc          #+#    #+#             */
/*   Updated: 2025/12/04 16:37:29 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>
# include <unistd.h>

typedef struct s_list
{
	long			nb;
	int				index;
	struct s_list	*next;
	struct s_list	*previous;
}	t_list;

typedef struct	s_data
{
	int		moves;
	t_list	*a;
	t_list	*b;
}	t_data;

int		ft_lstsize(t_list lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_atoi(const char *str);
t_list	*ft_lstnew(void *content);
int		ft_print_ints(char *str, int *count);
void	ft_push_a(t_data *data, int check);
void	ft_push_b(t_data *data, int check);
void	ft_reverse_a(t_data *data, int check);
void	ft_reverse_b(t_data *data, int check);
void	ft_rotate_a(t_data *data, int check);
void	ft_rotate_b(t_data *data, int check);
void	ft_rr(t_data *data);
void    ft_rrr(t_data *data);
void	ft_swap_a(t_data *data, int check);
void	ft_swap_b(t_data *data, int check);
void	ft_swap_ab(t_data *data);
void    ft_index(t_data *data);
int		is_sorted(t_list *pack);

#endif
