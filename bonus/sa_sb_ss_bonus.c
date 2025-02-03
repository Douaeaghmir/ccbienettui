/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:34:49 by doaghmir          #+#    #+#             */
/*   Updated: 2025/02/03 13:48:38 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
void sa(t_stack **a, bool puts)
{
    if(ft_lstsize(*a) < 2)
        return;
    t_stack *first;
    t_stack *after;

    first = *a;
    after = (*a)->next;

    first->next = after->next;
    after->next = first;
    *a = after;
    
    if(puts)
    write(1, "sa\n",3);
}

void sb(t_stack **b, bool puts)
{
    if(ft_lstsize(*b) < 2)
        return;
    t_stack *first;
    t_stack *after;

    first = *b;
    after = (*b)->next;
    first->next = after->next;
    after->next = first;
    *b = after;
    if(puts)
    write(1, "sb\n", 3);
}

void ss(t_stack **a, t_stack **b)
{
    sa(a, false);
    sb(b, false);
}