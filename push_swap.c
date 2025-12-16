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

int    size_2(t_data *data)
{
    if (data->a->nb > (data->a->nb->next))
        return (ft_push_a(data->a, 1));
    if (data->b->nb > (data->b->nb->next))
        return (ft_push_b(data->b, 1));
}
