/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:52:58 by ahamalai          #+#    #+#             */
/*   Updated: 2024/01/11 15:31:29 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_push(t_stack_node **stack_to, t_stack_node **stack_from)
{
		t_stack_node *temp;

		temp = *stack_from->next;
		*stack_from->next = *stack_to;
		*stack_to = *stack_from;
		*stack_from = temp;
}

void	ft_push_a(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (!stack_b)
		return ;
	push(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	ft_push_b(t_stack_node **stack_a, t_stack_node)
{
	if (!stack_a)
		return ;
	push(stack_b, stack_a);
	write(1, "pb\n", 3);
}
