/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:58:38 by ahamalai          #+#    #+#             */
/*   Updated: 2024/01/22 15:45:44 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(t_stack_node **stack)
{
	int				temp_nbr;
	int				temp_index;
	t_stack_node	*next;
	t_stack_node	*node;

	node = *stack;
	next = node->next;
	if (!node && !next)
		return ;
	temp_nbr = node->nbr;
	temp_index = node->index;
	node->nbr = next->nbr;
	node->index = next->index;
	next->nbr = temp_nbr;
	next->index = temp_index;
}

void	ft_swap_a(t_stack_node **a)
{
	if (ft_stack_len(*a) < 2)
		return ;
	ft_swap(a);
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_stack_node **b)
{
	if (ft_stack_len(*b) < 2)
		return ;
	ft_swap(b);
	write(1, "sb\n", 3);
}

void	ft_swap_swap(t_stack_node **a, t_stack_node **b)
{
	if (ft_stack_len(*a) < 2 || ft_stack_len(*b) < 2)
		return ;
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
}
