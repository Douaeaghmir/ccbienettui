/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:52:40 by doaghmir          #+#    #+#             */
/*   Updated: 2025/02/03 12:33:06 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include "getnext_line/get_next_line.h"

static int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] && s2[i] && (s1[i] == s2[i]))
    i++;
    return(s1[i] - s2[i]);
}
int instroctions(char *cmd, t_stack **a, t_stack **b)
{
    if(!ft_strcmp(cmd, "sa\n"))
        sa(a, false);
    else if(!ft_strcmp(cmd, "sb\n"))
        sb(b, false);
    else if(!ft_strcmp(cmd, "ss\n"))
        ss(a,b);
    else if(!ft_strcmp(cmd, "pa\n"))
        pa(a,b);
    else if(!ft_strcmp(cmd, "pb\n"))
        pb(a,b);
    else if(!ft_strcmp(cmd,"ra\n"))
        ra(a);
    else if(!ft_strcmp(cmd, "rb\n"))
        rb(b);
    else if(!ft_strcmp(cmd, "rr\n"))
        rr(a,b);
    else if(!ft_strcmp(cmd, "rra\n"))
        rra(a, false);
    else if(!ft_strcmp(cmd, "rrb\n"))
        rrb(b,false);
    else if(!ft_strcmp(cmd, "rrr\n"))
        rrr(a,b);
    else
        return 0;
    return 1;    
}
void checker(t_stack **a, t_stack **b)
{
    char *cmd = NULL;
    
    while(1)
    {
        cmd = get_next_line(0);
        if (!cmd)
            break;
        if(!instroctions(cmd, a, b))
        {
            free(cmd);
            stack_free(*b);
            exit_error(a);
        }
        free(cmd);        
    }
    if(not_sorted(*a) || *b)
        write(1, "KO\n", 3);
    else
        write(1, "OK\n", 3);
}
int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL;
    if(ac < 2)
        return 0;
    ft_init(&a,av,0);
    checker(&a,&b);
    stack_free(a);
    stack_free(b);
}