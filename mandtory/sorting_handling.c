/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_handling.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:34:20 by doaghmir          #+#    #+#             */
/*   Updated: 2025/02/01 10:50:25 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_3(t_stack **a)
{
     t_stack *max_node;
     max_node = *a;

    if(max_node->value > max_node->next->value && max_node->value > max_node->next->next->value)
        ra(a);
    else if(max_node->next->value > max_node->value && max_node->next->value > max_node->next->next->value)
        rra(a, false);
    if((*a)->value  > (*a)->next->value)
        sa(a, false);
}

void    print_stack(t_stack *a)
{
    while (a)
    {
        printf("%d\n", a->value);
        a = a->next;
    }
}

void sort_4(t_stack **a, t_stack **b)
{
     
    int min_node = ft_min_node(*a);

    if(not_sorted(*a))
    {
        while((*a)->value != min_node)
            rra(a, false);
        pb(a,b);
        sort_3(a);
        pa(a, b);
    }
}
void sort_5(t_stack **a,t_stack **b)
{
    int min_node = ft_min_node(*a);

    if(not_sorted(*a))
    {
        while((*a)->value != min_node)
            rra(a, false);
       pb(a,b);
       sort_4(a,b);
       pa(a,b);
    }
}