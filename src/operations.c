/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/27 19:05:43 by fras          #+#    #+#                 */
/*   Updated: 2023/05/28 01:51:37 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_ops(t_command operation)
{
	if (operation == sa)
		ft_printf("sa\n");
	if (operation == sb)
		ft_printf("sb\n");
	if (operation == ss)
		ft_printf("ss\n");
	if (operation == pa)
		ft_printf("pa\n");
	if (operation == pb)
		ft_printf("pb\n");
	if (operation == ra)
		ft_printf("ra\n");
	if (operation == rb)
		ft_printf("rb\n");
	if (operation == rr)
		ft_printf("rr\n");
	if (operation == rra)
		ft_printf("rra\n");
	if (operation == rrb)
		ft_printf("rrb\n");
	if (operation == rrr)
		ft_printf("rrr\n");
}