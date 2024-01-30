/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:46:53 by ahamalai          #+#    #+#             */
/*   Updated: 2024/01/30 14:10:22 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdbool.h>

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	struct s_stack_node	*next;
}	t_stack_node;

void			ft_free_matrix(char **argv);
void			ft_free_stack(t_stack_node **stack);
void			ft_error_free(t_stack_node **a, char **argv, bool flag_argc);
int				ft_check_nbrs(char *str);
int				ft_error_repetition(t_stack_node *a, int nbr);
t_stack_node	*ft_get_last_node(t_stack_node *head, int i);
int				ft_stack_len(t_stack_node *stack);
long			ft_atol(const char *str);
void			ft_append_node(t_stack_node **stack, int nbr);
void			ft_initialize_stack(t_stack_node **stack, char **argv, bool flag_argc);
void			ft_push(t_stack_node **stack_to, t_stack_node **stack_from);
void			ft_push_a(t_stack_node **stack_a, t_stack_node **stack_b);
void			ft_push_b(t_stack_node **stack_a, t_stack_node **stack_b);
void			ft_push_b(t_stack_node **stack_a, t_stack_node **stack_b);
void			ft_reverse_rotate(t_stack_node **stack);
void			ft_reverse_a(t_stack_node **a);
void			ft_reverse_b(t_stack_node **b);
void			ft_reverse_rr(t_stack_node **a, t_stack_node **b);
void			ft_rotate(t_stack_node **stack);
void			ft_rotate_a(t_stack_node **a);
void			ft_rotate_b(t_stack_node **b);
void			ft_rotate_rotate(t_stack_node **a, t_stack_node **b);
void			ft_swap(t_stack_node **stack);
void			ft_swap_a(t_stack_node **a);
void			ft_swap_b(t_stack_node **b);
void			ft_swap_swap(t_stack_node **a, t_stack_node **b);
void			ft_small_sort(t_stack_node **a);
bool			ft_stack_sorted(t_stack_node *stack);
t_stack_node	*find_highest(t_stack_node *stack);
void			ft_do_the_sort(t_stack_node **a, t_stack_node **b);
void			ft_sort_four(t_stack_node **a, t_stack_node **b);
void			ft_sort_five(t_stack_node **a, t_stack_node **b);
bool			ft_stack_sorted(t_stack_node *stack);
void			ft_assing_sort(t_stack_node **a, t_stack_node **b);
t_stack_node	*find_smallest(t_stack_node *stack);

#endif
