/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:50:30 by doaghmir          #+#    #+#             */
/*   Updated: 2025/02/03 15:15:15 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void to_b(t_stack **a, t_stack **b, int chunks, int track)
{
    t_stack *holder;

    if(ft_lstsize(*a) <= 100)
        chunks = 16;
    else
        chunks = 36;
    while(*a)
    {
        holder = *a;
        if(holder->index <= track)
        {
            pb(a,b);
            track++;
        }
        else if(holder->index <= track + chunks)
        {
            pb(a,b);
            rb(b);
            track++;
        }
        else
            ra(a);
    }

}

void back_to_a(t_stack **a, t_stack **b, int size_of_stack)
{
    int max_position_node;
    size_of_stack = ft_lstsize(*b);
    while(size_of_stack)
    {
        set_position(*b);
        max_position_node = give_max_position(*b);
        if(max_position_node < (size_of_stack / 2))
        {
            while((*b)->position != max_position_node)
                rb(b);
        }
        else
        {
            while((*b)->position != max_position_node)
                rrb(b , false);
        }
        pa(a,b);
        size_of_stack--;
    }
}