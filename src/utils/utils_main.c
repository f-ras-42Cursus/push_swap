/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils_main.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 04:07:43 by fras          #+#    #+#                 */
/*   Updated: 2023/06/12 22:21:06 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	circular_list_size(t_data *head)
{
	size_t	size;
	t_data	*ptr;

	size = 0;
	ptr = head->next;
	while (ptr != head)
	{
		ptr = ptr->next;
		size++;
	}
	return (++size);
}

bool	fr_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

long	fr_atol(const char *str)
{
	long	rtn;
	int		i;
	int		sign;

	i = 0;
	rtn = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		rtn *= 10;
		rtn += str[i++] - '0';
	}
	return (rtn * sign);
}

void	freeing_data(t_data *data)
{
	t_data *head;
	t_data *next;

	head = data;
	while (data)
	{
		next = data->next;
		if (next == head)
			return ;
		free(data);
		data=next;
	}
}
