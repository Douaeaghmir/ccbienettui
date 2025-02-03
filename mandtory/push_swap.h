/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:00:50 by doaghmir          #+#    #+#             */
/*   Updated: 2025/02/01 17:02:54 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include <stdio.h>
typedef struct s_stack
{
	int value;
    int index;
    int position;
    struct s_stack *next;
}				t_stack;

void    sa(t_stack **a, bool puts);
void    sb(t_stack **b, bool puts);
void    ss(t_stack **a, t_stack **b);
void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);
void    ra(t_stack **a);
void    rb(t_stack **b);
void    rr(t_stack **a,  t_stack **b);
void    rra(t_stack **a, bool puts);
void    rrb(t_stack **b, bool puts);
void    rrr(t_stack **a, t_stack **b);
void    ft_lstadd_back(t_stack **stack, t_stack *new);
void    set_position(t_stack *stack);
void    sort_3(t_stack **a);
void    sort_4(t_stack **a, t_stack **b);
void    sort_5(t_stack **a,t_stack **b);    
void   	stack_free(t_stack *stack);
void    exit_error(t_stack **stack);
void    to_b(t_stack **a, t_stack **b, int chunks, int track);
void    back_to_a(t_stack **a, t_stack **b, int size_of_stack);
void    ft_free(char **str);
void    index_stack(t_stack **stack);

int     ft_lstsize(t_stack *lst);
int     give_max_position(t_stack *stack);
int     not_sorted(t_stack *stack);
int     not_sorted(t_stack *stack);
int     duplicate(t_stack *a, int n);

t_stack *ft_lstlast(t_stack *lst);
t_stack *ft_lstnew(int value, int index);
t_stack *ft_max_node(t_stack *stack);
int     ft_min_node(t_stack *stack);
char	**ft_split(char const *s, char c);

#endif
