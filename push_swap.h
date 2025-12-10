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

# include "../libft/libft.h"
# include "../printf/ft_printf.h"

typedef struct s_list
{
	int	moves;
	long		nb;
	struct s_list	*next;
	struct s_list	*former;
}	t_list;

int	ft_lstsize(t_list lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
int	ft_atoi(const char *str);
t_list	*ft_lstnew(void *content);
void	ft_swap_a(t_list **a);
void	ft_swap_b(t_list **b);
int	ft_print_ints(char *str, int *count);
