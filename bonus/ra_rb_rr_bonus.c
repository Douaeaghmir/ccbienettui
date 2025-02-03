/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:34:42 by doaghmir          #+#    #+#             */
/*   Updated: 2025/02/03 13:49:05 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
void ra(t_stack **a)
{
    t_stack *top;
    t_stack *holder;
    
    if(ft_lstsize(*a) < 2)
        return;
    top = *a;
    holder = *a;

    while(holder->next)
        holder = holder->next;
    
    *a = top->next;
    top->next = NULL;
    holder->next = top;
}

void rb(t_stack **b)
{
    t_stack *top;
    t_stack *holder;
    if(ft_lstsize(*b) < 2)
        return;
    top = *b;
    holder = *b;
    while(holder->next)
        holder  = holder->next;
    *b = top->next;
    top->next = NULL;
    holder->next = top;
}

void rr(t_stack **a, t_stack **b)
{
    rb(b);
    ra(a);
}
 