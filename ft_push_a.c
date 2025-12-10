/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:59:29 by aarogarc          #+#    #+#             */
/*   Updated: 2025/12/10 10:59:08 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_push_a(t_list **a, t_list **b, int check)
{
	t_list	*head;
	t_list	*data;

	data.moves = 0;
	if (!*b)
		return ;
	head = *b;
	*b = (*b)->next;
	if (*b)
		(*b)->previous = NULL;
	head->next = *a;
	head->previous = NULL;
	if (check)
		ft_print_ints("pa\n", &data.moves);
}
