/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:34:35 by doaghmir          #+#    #+#             */
/*   Updated: 2025/02/01 14:41:00 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void set_position(t_stack *stack)
{
    t_stack *node;
    int i;

    i = 0;
    node = stack;
    while(node)
    {
            node->position = i;
            i++;
            node = node->next;
    }
}

int give_max_position(t_stack *stack)
{
    t_stack *node = stack;
    int max_value = INT_MIN;
    int max_position = 0;
    int i = 0;

    while (node)
    {
        if (node->value > max_value)
        {
            max_value = node->value;
            max_position = i;
        }
        node = node->next;
        i++;
    }
    return max_position;
}

t_stack *ft_max_node(t_stack *stack)
{
    t_stack *node = stack;
    t_stack *max = node;

    while (node)
    {
        if (node->value > max->value)
            max = node;
        node = node->next;
    }
    return max;
}

int ft_min_node(t_stack *stack)
{
  t_stack *node;
    int min;

    node = stack;
    min = INT_MAX;
    while(node)
    {
        if(node->value < min)
            min = node->value;
        node = node->next;
    }
    return(min);
}

int not_sorted(t_stack *stack)
{
    t_stack *node;
     
    node = stack;
    while(node && node->next)
    {
       if(node->value > node->next->value)
           return(1);
       node = node->next;
    }
    return(0);
}
