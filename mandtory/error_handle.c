/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:50:11 by doaghmir          #+#    #+#             */
/*   Updated: 2025/02/03 11:55:00 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int duplicate(t_stack *a, int n)
{
    while(a)
    {
        if(a->value == n)
        return(1);
        a = a->next;
    }
    return(0);
}

void stack_free(t_stack *stack)
{
    t_stack *node;
    t_stack *tmp;

    if(!stack)
        return;
    node = stack;
    tmp = node;
    while(node)
    {
        tmp = node->next;
        free(node);
        node = tmp;
    }
    stack = NULL;
}

void exit_error(t_stack **stack)
{
    stack_free(*stack);
    write(2, "error\n", 6);
    exit(EXIT_FAILURE);
}
void ft_free(char **str)
{
    int i = 0;
    while(str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}