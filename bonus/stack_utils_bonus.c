/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:35:00 by doaghmir          #+#    #+#             */
/*   Updated: 2025/02/03 11:52:09 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_back(t_stack **stack, t_stack *new)
{
	t_stack *tmp;
	t_stack *last;

	if(!stack || !new)
		return ;
	tmp = *stack;
	while(tmp)
		tmp = tmp->next;
	if(*stack == NULL)
	{
		*stack = new;
		return ;
	}
	last = ft_lstlast(*stack);
	last->next = new;
}

t_stack	*ft_lstnew(int value, int index)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = index;
	node->next = NULL;
	return (node);
}
void    index_stack(t_stack **stack)
{
    t_stack *tmp;
    t_stack *height;
    int     size;
    int     data;

    size = ft_lstsize(*stack);
    while (size-- > 0)
    {
        tmp = *stack;
        data = INT_MIN;
        if (tmp->value == INT_MIN && tmp->index == 0)
            tmp->index = 1;
        while (tmp)
        {
            if (tmp->value > data && tmp->index == 0)
            {
                data = tmp->value;
                height = tmp;
                tmp = *stack;
            }
            else
                tmp = tmp->next;
        }
        if (height)
            height->index = size;
    }
}