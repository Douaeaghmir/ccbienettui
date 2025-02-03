#include "push_swap_bonus.h"
static void ft_error(void)
{
    write(1, "error\n", 6);
    exit(1);
}

static long ft_atoi(char *str, int i, long long res)
{
    int sign = 1;
    while(str[i] == ' ')
    i++;
    if(str[i] == '-')
        sign = -1;
    if(str[i] == '+' || str[i] == '-')
    i++;
    if(!str[i] || (str[i] < '0' && str[i] > '9'))
        ft_error();
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        if (res > (LLONG_MAX / 10) || (res == (LLONG_MAX / 10) && (str[i] - '0') > LLONG_MAX % 10))
            ft_error();
        i++;
    }
    if(str[i])
    ft_error();
        if((res * sign) < INT_MIN || (res * sign) > INT_MAX)
        ft_error();
    return(int)(sign *res);
}

void ft_init(t_stack **a, char **av, int i)
{
    int j;
    long nbr;
    char **str;
    
    i = 1;
    while(av[i])
    {
        str = ft_split(av[i], ' ');
        if(!str)
            exit_error(a);
        j = 0;
        while(str[j])
        {
            nbr = ft_atoi(str[j], 0 , 0);
            if(duplicate(*a, (int)nbr))
                exit_error(a);
            (ft_lstadd_back(a,ft_lstnew((int)nbr, 0)));
                j++;
        }
        if(j == 0)
            (write(1, "error\n",6), exit(1));
        ft_free(str);
        i++;
    }
}