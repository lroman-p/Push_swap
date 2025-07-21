/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p  <lroman-p@student.42.madrid.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:13:01 by lroman-p          #+#    #+#             */
/*   Updated: 2025/06/21 16:13:03 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./incl/libft.h"
#include "../incl/ft_printf/ft_printf.h"

static void	move_a_to_b(t_stack_node **a, t_stack_node **b)
{
	if (*b == NULL)
		return ;
	prep_for_push(a, (*b)->target_node, 'a');
	pa(a, b, false);
}

static void	min_on_top(t_stack_node **a)
{
	while ((*a)->nbr != find_min(*a)->nbr)
	{
		if (find_min(*a)->above_median)
			ra(a, false);
		else
			rra(a, false);
	}
}

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	len_a;

	len_a = stack_len(*a);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb (b, a, false);
	if (len_a-- > 3 && !stack_sorted(*a))
	{
		init_nodes_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_a_to_b(a, b);
	}
	current_index(*a);
	min_on_top(a);
}
