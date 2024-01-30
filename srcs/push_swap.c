/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:20:15 by ahamalai          #+#    #+#             */
/*   Updated: 2024/01/30 13:55:49 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack_node	*find_highest(t_stack_node *stack)
{
	int				highest;
	t_stack_node	*highest_node;

	if (NULL == stack)
		return (NULL);
	highest = -2147483648;
	while (stack)
	{
		if (stack->nbr > highest)
		{
			highest = stack->nbr;
			highest_node = stack;
		}
		stack = stack->next;
	}
	return (highest_node);
}

void	ft_append_node(t_stack_node **stack, int nbr)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (stack == NULL)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (node == NULL)
		return ;
	node->next = NULL;
	node->nbr = nbr;
	if (*stack == NULL)
		*stack = node;
	else
	{
		last_node = ft_get_last_node(*stack, 1);
		last_node->next = node;
	}
}

void	ft_initialize_stack(t_stack_node **stack, char **argv, bool flag_argc)
{
	int		i;
	long	nbr;

	i = 0;
	while (argv[i])
	{
		if (ft_check_nbrs(argv[i]))
			ft_error_free(stack, argv, flag_argc);
		nbr = ft_atol(argv[i]);
		if (nbr > 2147483647 || nbr < -2147483648)
			ft_error_free(stack, argv, flag_argc);
		if (ft_error_repetition(*stack, nbr))
			ft_error_free(stack, argv, flag_argc);
		ft_append_node(stack, nbr);
		i++;
	}
	if (flag_argc)
		ft_free_matrix(argv);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;

	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	ft_initialize_stack(&a, argv + 1, 2 == argc);
	if (!ft_stack_sorted(a))
	{
		if (ft_stack_len(a) == 2)
			ft_swap_a(&a);
		else if (ft_stack_len(a) <= 5)
			ft_assing_sort(&a, &b);
		else
			ft_do_the_sort(&a, &b);
	}
	ft_free_stack(&a);
}

