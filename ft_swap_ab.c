/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:44:52 by aarogarc          #+#    #+#             */
/*   Updated: 2025/12/08 20:57:05 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_swap_ab(t_stack *a, t_stack *b)
{
	ft_swap_a(a);
	ft_swap_b(b);
	ft_print_ints(
