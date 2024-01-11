/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:02:34 by ahamalai          #+#    #+#             */
/*   Updated: 2024/01/11 15:44:32 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_rotate(t_stack_node **stack)
{
	t_stack_node	*head;
	t_stack_node	*last;

	head = *stack;
	last = ft_get_last_node(head);
	*stack = head->next
	head->next = NULL;
	last->next = head;	
}
