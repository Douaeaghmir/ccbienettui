/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:34:45 by doaghmir          #+#    #+#             */
/*   Updated: 2025/02/03 13:49:16 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
void rra(t_stack **a, bool puts)
{
    t_stack *current;
    t_stack *prev;

    if(ft_lstsize(*a) < 2)
        return;
    current = *a;
    prev = NULL;

    while(current->next)
    {
    prev = current;
    current = current->next;
    }
    prev->next = NULL;
    current->next = *a;
    *a = current;
    if(puts)
    write(1, "rra\n", 4);
}  

void rrb(t_stack **b, bool puts)
{
    t_stack *current;
    t_stack *prev;
    if(ft_lstsize(*b) < 2)
        return;
    current = *b;
    prev = NULL;
    while(current->next)
    {
        prev = current;
        current = current->next;
    }
    prev->next = NULL;
    current->next = *b;
    *b = current;
    if(puts)
    write(1, "rrb\n", 4);
}

void rrr(t_stack **a, t_stack **b)
{
    rra(a, false);
    rrb(b, false);
}