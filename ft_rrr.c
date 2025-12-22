#include "push_swap.h"

void	ft_rrr(t_data *data)
{
	ft_reverse_a(data->a, 0);
	ft_reverse_b(data->b, 0);
	ft_print_ints("rrr\n", &data->moves);
}