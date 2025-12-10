/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:58:52 by aarogarc          #+#    #+#             */
/*   Updated: 2025/12/08 17:34:14 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_swap_a(t_list **a, int check)
{
	if (!a || !*a || !((*a)->next))
		return ;
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*data;

	data.moves = 0;
	first = *a;
	second = (*a)->next;
	third = second->next;
	*a = second;
	second->previous = NULL;
	second->next = first;
	first->previous = second;
	first->next = third;
	if (check)
		ft_print_ints("sa\n", &data.moves, 1);
}
