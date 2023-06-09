/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validations.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/26 21:50:25 by fras          #+#    #+#                 */
/*   Updated: 2023/07/05 21:21:36 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	validate_formatting(char *argv[])
{
	int	i;
	int	j;
	int	digit_count;

	i = 1;
	while (argv[i])
	{
		j = 0;
		digit_count = 0;
		if (!argv[i][j])
			error_exit();
		while (argv[i][j])
		{
			digit_count += ft_isdigit(argv[i][j]);
			if (digit_count > TOTAL_DIGITS_MAX_INT)
				error_exit();
			if (!is_valid_num_format(argv[i], j))
				error_exit();
			if (argv[i][j] == ' ')
				digit_count = 0;
			j++;
		}
		i++;
	}
}

bool	is_valid_num_format(char *ptr, int i)
{
	if (i == 0)
		return (ft_isdigit(ptr[i]) || ((ptr[i] == '-') && ptr[i + 1]));
	return (ft_isdigit(ptr[i]) \
		|| ((ptr[i] == ' ') && ft_isdigit(ptr[i - 1]) && ptr[i + 1]) \
		|| ((ptr[i] == '-') && (ptr[i - 1] == ' ') && ptr[i + 1]));
}

int	int_only(long input, t_data *data)
{
	if (input > INT_MAX || input < INT_MIN)
	{
		freeing_data(data);
		error_exit();
	}
	return ((int) input);
}

void	validate_no_duplicate_num(t_data *head)
{
	int		check_value;
	t_data	*ptr;
	t_data	*pos;

	pos = head;
	check_value = pos->input_value;
	pos = pos->next;
	while (pos != head)
	{
		ptr = pos;
		while (ptr != head)
		{
			if (check_value == ptr->input_value)
			{
				freeing_data(head);
				error_exit();
			}
			ptr = ptr->next;
		}
		check_value = pos->input_value;
		pos = pos->next;
	}
}
