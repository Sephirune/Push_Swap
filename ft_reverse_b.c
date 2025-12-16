#include "push_swap.h"

void	ft_reverse_b(t_data *data, int check)
{
    t_list  *blast;
    t_list  *last;

    if (!data->b || !data->b->next)
        return ;
    last = data->b;
    while (last->next)
        last = last->next;
    blast = last->previous;
    blast->next = NULL;
    last->next = data->b;
    last->previous = NULL;
    data->b->previous = last;
    data->b = last;
    if (check)
        ft_print_ints("rra\n", &data->moves);
}