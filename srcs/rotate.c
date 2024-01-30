/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:02:34 by ahamalai          #+#    #+#             */
/*   Updated: 2024/01/22 15:32:23 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate(t_stack_node **stack)
{
	t_stack_node	*head;
	t_stack_node	*last;

	if (ft_stack_len(*stack) < 2)
		return ;
	head = *stack;
	last = ft_get_last_node(head, 1);
	*stack = head->next;
	head->next = NULL;
	last->next = head;
}

void	ft_rotate_a(t_stack_node **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	ft_rotate_b(t_stack_node **b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}

void	ft_rotate_rotate(t_stack_node **a, t_stack_node **b)
{
	ft_rotate(a);
	ft_rotate(b);
	write(1, "rr\n", 3);
}
