/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:52:58 by ahamalai          #+#    #+#             */
/*   Updated: 2024/01/25 17:14:16 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push(t_stack_node **stack_to, t_stack_node **stack_from)
{
	t_stack_node	*temp;

	temp = *stack_from;
	*stack_from = (*stack_from)->next;
	temp->next = *stack_to;
	*stack_to = temp;
}

void	ft_push_a(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (!*stack_b || !stack_b)
		return ;
	ft_push(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	ft_push_b(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (!*stack_a || !stack_a)
		return ;
	ft_push(stack_b, stack_a);
	write(1, "pb\n", 3);
}
