/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:42:13 by aarogarc          #+#    #+#             */
/*   Updated: 2025/12/08 17:44:40 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_swap_b(t_list **b)
{
	if (!b || !*b || !((*b)->next))
		return ;
	t_list	first;
	t_list	second;
	t_list	third;

	first = *b;
	second = (*b)->next;
	third = second->next;
	*b = second;
	second->previous = NULL;
	second->next = first;
	first->previous = second;
	first->next = third;
}
