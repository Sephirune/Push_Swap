/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:59:29 by aarogarc          #+#    #+#             */
/*   Updated: 2025/12/10 11:01:18 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_push_b(t_list **a, t_list **b, int check)
{
	t_list	*head;
	t_list	*data;

	data.moves = 0;
	if (!*a)
		return ;
	head = *a;
	*a = (*a)->next;
	if (*a)
		(*a)->previous = NULL;
	head->next = *b;
	head->previous = NULL;
	if (check)
		ft_print_ints("pb\n", &data.moves);
}
