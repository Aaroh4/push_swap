/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:28:23 by ahamalai          #+#    #+#             */
/*   Updated: 2024/01/11 15:46:02 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_stack_node	*ft_get_last_node(t_stack_node *head)
{
	while (head->next != NULL)
		head = head->next;
	return (head);
}

