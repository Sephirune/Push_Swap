/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 12:22:32 by aarogarc          #+#    #+#             */
/*   Updated: 2025/11/21 12:22:34 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	size_2(t_data *data)
{
    if ((data->a->nb) > (data->a->next->nb))
        ft_swap_a(data->a, 1);
}

void	size_3(t_data *data)
{
	long	a;
	long	b;
	long	c;

	a = data->a->nb;
	b = data->a->next->nb;
	c = data->a->next->next->nb;
	if (a > b && b < c && a < c)
		ft_swap_a(data, 1);
	else if (a > b && b < c && a > c)
		ft_rotate_a(data, 1);
	else if (a > b && b > c)
	{
		ft_swap_a(data, 1);
		ft_reverse_a(data, 1);
	}
	else if (a < b && b > c && a < c)
	{
		ft_swap_a(data, 1);
		ft_rotate_a(data, 1);
	}
	else if (a < b && b > c && a > c)
		ft_reverse_a(data, 1);
}

void	size_5(t_data *data)
{
	ft_index(data);
	push_min(data);
	push_min(data);
	if (!is_sorted(data->a))
		size_3(data);
	ft_push_a(data, 1);
	ft_push_a(data, 1);
}
