/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:34:29 by doaghmir          #+#    #+#             */
/*   Updated: 2025/01/30 18:26:24 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
void pa(t_stack **a, t_stack **b)
{
    if(!*b)
        return;
    t_stack *holder;
    holder = *b;
    *b = (*b)->next;
    holder->next = *a;
    *a = holder;
    write(1, "pa\n", 3); 

}
void pb(t_stack **a, t_stack **b)
{
    if(!a || !*a)
        return;
    t_stack *holder;

    holder = *a;
    *a = (*a)->next;
    holder->next = *b;
    *b = holder;
    write(1, "pb\n", 3); 
}
