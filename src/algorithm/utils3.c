#include "push_swap.h"

void    aux_split(t_data *data, char **split)
{
    int j;
    int value;
    t_list  *node;

    j = 0;
    while (split[j])
    {
        value = ft_atoi(split[j]);
        if (check_duplicate(data, value))
        {
            free_split(split);
            check_error();
        }
        node = ft_lstnew(value);
        ft_lstadd_back(&data->a, node);
        j++;
    }
}

void    free_list(t_list **lst)
{
	t_list *current;
	t_list  *next;

	if (!lst || !*lst)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
}

void	check_error_free(t_data *data)
{
	free_list(&data->a);
	free_list(&data->b);
	write(2, "Error\n", 6);
	exit (1);
}

void	aux_main(t_data *data, int size)
{
	if (size == 2)
		size_2(data);
	else if (size == 3)
		size_3(data);
	else if (size <= 5)
		size_5(data);
	else
		radix_sort(data);
}