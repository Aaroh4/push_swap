/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:17:52 by ahamalai          #+#    #+#             */
/*   Updated: 2024/01/22 16:50:35 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*head;
	t_stack_node	*second_last;

	head = *stack;
	second_last = ft_get_last_node(head, 2);
	head = second_last->next;
	head->next = *stack;
	second_last->next = NULL;
	*stack = head;
}

void	ft_reverse_a(t_stack_node **a)
{
	ft_reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	ft_reverse_b(t_stack_node **b)
{
	ft_reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	ft_reverse_rr(t_stack_node **a, t_stack_node **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	write(1, "rrr\n", 4);
}