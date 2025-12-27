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