/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:50:11 by doaghmir          #+#    #+#             */
/*   Updated: 2025/02/03 12:12:04 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
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
}

void exit_error(t_stack **stack)
{
    stack_free(*stack);
    write(2, "error\n", 4);
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