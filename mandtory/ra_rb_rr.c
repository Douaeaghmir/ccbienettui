/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:34:42 by doaghmir          #+#    #+#             */
/*   Updated: 2025/01/31 17:23:55 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
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
    write(1, "ra\n", 3);
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
    write(1, "rb\n", 3);
}

void rr(t_stack **a, t_stack **b)
{
    rb(b);
    ra(a);
    write(1, "rr\n", 3);
}
 