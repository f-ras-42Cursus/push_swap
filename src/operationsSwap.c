/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operationsSwap.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 10:14:58 by fras          #+#    #+#                 */
/*   Updated: 2023/05/25 14:42:02 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_data **stackA)
{
	t_data	*first;
	t_data	*second;
	t_data	*third;
	t_data	*tail;

	if (!*stackA || (*stackA)->next == *stackA)
		return ;
	first = *stackA;
	second = first->next;
	third = second->next;
	tail = first->prev;
	first->prev = second;
	first->next = third;
	second->prev = tail;
	second->next = first;
	tail->next = second;
	third->prev = first;
	*stackA = second;
	ft_printf("sa\n");
}

void	swap_b(t_data **stackB)
{
	t_data	*first;
	t_data	*second;
	t_data	*third;
	t_data	*tail;

	if (!*stackB || (*stackB)->next == *stackB)
		return ;
	first = *stackB;
	second = first->next;
	third = second->next;
	tail = first->prev;
	first->prev = second;
	first->next = third;
	second->prev = tail;
	second->next = first;
	tail->next = second;
	third->prev = first;
	*stackB = second;
	ft_printf("sa\n");
}

void	swap_swap_ab(t_data **stackA, t_data **stackB)
{
	swap_a(stackA);
	swap_b(stackB);
	ft_printf("ss\n");
}