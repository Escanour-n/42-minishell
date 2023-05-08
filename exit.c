/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouakhro <nouakhro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:42:01 by nouakhro          #+#    #+#             */
/*   Updated: 2023/05/08 13:42:10 by nouakhro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"minishell.h"

void	_exit(int c_of_s)
{
	int	i;

	i = 0;
	exit_error_not_numeric(c_of_s, i);
	if (g_struct.each_cmd[c_of_s].cmd[1] && g_struct.each_cmd[c_of_s].cmd[2])
	{
		ft_putstr_fd("minishell: exit: too many arguments\n", 2);
		exit(1);
	}
	exit(g_struct.exit_status);
}