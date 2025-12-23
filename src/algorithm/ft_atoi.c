/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarogarc <aarogarc@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:07:58 by aarogarc          #+#    #+#             */
/*   Updated: 2025/12/17 11:08:10 by aarogarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	is_space(const char *str, int *i)
{
	while (str[*i] == 32 || (str[*i] >= 9 && str[*i] <= 13))
			(*i)++;
}

int	check_sign(const char *str, int *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign *= -1;
		(*i)++;
	}
	return (sign);
}

void	check_overflow(long number, int sign)
{
	if (number * sign > __INT_MAX__ || (number * sign < -2147483648))
	{
		ft_printf("Overflow");
		exit(1);
	}
}

int	ft_atoi(const char *str)
{
	long	number;
	int	    sign;
	int	    i;

	i = 0;
	number = 0;
	is_space(str, &i);
	sign = check_sign(str, &i);
	if (str[i] < '0' || str[i] > '9')
	{
		ft_printf("Overflow");
		exit(1);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
        check_overflow(number, sign);
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * sign);
}
