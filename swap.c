/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:58:38 by ahamalai          #+#    #+#             */
/*   Updated: 2024/01/11 15:30:49 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.c"

void	ft_swap(t_stack_node **stack)
{
	int				temp_nbr;
	int				temp_index;
	t_stack_node	*next;
	t_stack_node	*node;

	node = *stack;
	next = stack->next;
	if (!node && !next)
		return ;
	temp_nbr = node->nbr;
	temp_index = node->index;
	node->nbr = next->nbr;
	node->index = next->index;
	next->nbr = temp_nbr;
	next->index = temp_index;
}
