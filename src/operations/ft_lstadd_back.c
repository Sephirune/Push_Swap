#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	if (!lst || !new)
		return ;
	new->previous = NULL;
	new->next = NULL;
	if (*lst != NULL)
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
		new->previous = temp;
	}
	else
		*lst = new;
}