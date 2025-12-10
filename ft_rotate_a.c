/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:16:56 by aarogarc          #+#    #+#             */
/*   Updated: 2025/12/10 16:37:16 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_rotate_a(t_list **a, t_list **b, int check)
{
	t_list	*data;
	t_list	*first;
	t_list	*second;
	t_list	*last;

	if (!*a || !(*a)->next)
		return ;
	data.moves = 0;
	first = *a;
	second = (*a)->next;
	last = *a;
	while (last->next)
		last = last->next;
	*a = second;
	second->previous = NULL;
	last->next = first;
	first->previous = last;
	first->next = NULL;
	if (check)
		ft_print_ints("ra\n", &data.moves);
}

