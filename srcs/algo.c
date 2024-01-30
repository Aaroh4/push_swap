/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:40:12 by ahamalai          #+#    #+#             */
/*   Updated: 2024/01/30 14:36:05 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_small_sort(t_stack_node **a)
{
	t_stack_node	*highest_node;

	highest_node = find_highest(*a);
	if (*a == highest_node)
		ft_rotate_a(a);
	else if ((*a)->next == highest_node)
		ft_reverse_a(a);
	if ((*a)->nbr > (*a)->next->nbr)
		ft_swap_a(a);
}

int	ft_count_steps(t_stack_node *a)
{
	int	i;
	int	highest;

	i = 0;
	highest = find_smallest(a)->nbr;
	while (highest != a->nbr)
	{
		i++;
		a = a->next;
	}
	return (i);
}

void	ft_sort_four(t_stack_node **a, t_stack_node **b)
{
	int	steps;

	steps = ft_count_steps(*a);
	if (steps == 1)
		ft_rotate_a(a);
	else if (steps == 2)
	{
		ft_rotate_a(a);
		ft_rotate_a(a);
	}
	else if (steps == 3)
		ft_reverse_a(a);
	if (ft_stack_sorted(*a))
		return ;
	ft_push_b(a, b);
	ft_small_sort(a);
	ft_push_a(a, b);
}

void	ft_sort_five(t_stack_node **a, t_stack_node **b)
{
	int	steps;

	steps = ft_count_steps(*a);
	if (steps == 1)
		ft_swap_a(a);
	if (steps == 2)
	{
		ft_rotate_a(a);
		ft_rotate_a(a);
	}
	if (steps == 3)
	{
		ft_reverse_a(a);
		ft_reverse_a(a);
	}
	if (steps == 4)
		ft_reverse_a(a);
	ft_push_b(a, b);
	ft_sort_four(a, b);
	ft_push_a(a, b);
}

void	ft_do_the_sort(t_stack_node **a, t_stack_node **b)
{
	int	i;
	int	len;

	i = 0;
	while (!ft_stack_sorted(*a) || *b != NULL)
	{
		len = ft_stack_len(*a);
		while (len-- > 0 && !ft_stack_sorted(*a))
		{
			if ((((*a)->nbr >> i) & 1) == 0)
				ft_push_b(a, b);
			else
				ft_rotate_a(a);
		}
		i++;
		len = ft_stack_len(*b);
		while (0 < len--)
		{
			if ((((*b)->nbr >> i) & 1) == 0 && (!ft_stack_sorted(*a)))
				ft_rotate_b(b);
			else
				ft_push_a(a, b);
		}
	}
}

void	ft_assing_sort(t_stack_node **a, t_stack_node **b)
{
	if (ft_stack_len(*a) == 3)
		ft_small_sort(a);
	else if (ft_stack_len(*a) == 4)
		ft_sort_four(a, b);
	else if (ft_stack_len(*a) == 5)
		ft_sort_five(a, b);
}
