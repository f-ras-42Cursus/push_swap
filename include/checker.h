/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/08 00:46:16 by fras          #+#    #+#                 */
/*   Updated: 2023/06/08 20:12:09 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"

void	checker(t_data *data_input);
char	*get_next_line_stdin(void);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	sort_from_stdin_commands(t_data **stackA, t_data **stackB);
t_cmd	get_operations(char *str);
void	make_operations(t_cmd command, t_data **stackA, t_data **stackB);

#endif