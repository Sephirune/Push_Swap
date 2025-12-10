/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:37:34 by aarogarc          #+#    #+#             */
/*   Updated: 2025/12/10 16:39:45 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_rotate_b(t_list **a, t_list **b, int check)
{
	t_list	*data;
	t_list	*first;
	t_list	*second;
	t_list	*last;

	if (!*a || !(*a)->next)
		return ;
	data.moves = 0;
	first = *b;
	second = (*b)->next;
	last = *b;
	while (last->next)
		last = last->next;
	*b = second;
	second->previous = NULL;
	last->next = first;
	first->previous = last;
	first->next = NULL;
	if (check)
		ft_print_ints("rb\n", &data.moves);
}
