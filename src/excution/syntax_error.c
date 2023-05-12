/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouakhro <nouakhro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:08:08 by nouakhro          #+#    #+#             */
/*   Updated: 2023/05/12 01:18:39 by nouakhro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	syntax_error(t_var *variables)
{
	int	i;
	int	j;

	i = fork();
	error_fork(i, 0);
	if (i == 0)
	{
		ft_putstr_fd("minishell: syntax error rederaction\n", 2);
		exit(1);
	}
	wait(&i);
	i = 0;
	while (g_struct.each_cmd[i].files || g_struct.each_cmd[i].cmd)
	{
		j = 0;
		if(g_struct.each_cmd[i].files)
		{
			j = 0;
			while (g_struct.each_cmd[i].files[j].files)
			{
				free(g_struct.each_cmd[i].files[j].files);
				j++;
			}
			free(g_struct.each_cmd[i].files);
		}
		if(g_struct.each_cmd[i].cmd)
		{
			j = 0;
			while (g_struct.each_cmd[i].cmd[j])
			{
				free(g_struct.each_cmd[i].cmd[j]);
				j++;
			}
			free(g_struct.each_cmd[i].cmd);
		}
		i++;
	}
	i = 0;
	free(g_struct.each_cmd);
	free(g_struct.tmp_cmd);
	free(g_struct.the_commande);
	while (g_struct.splite_pipe[variables->index_i])
	{
		free(g_struct.splite_pipe[variables->index_i]);
		variables->index_i++;
	}
	free(g_struct.splite_pipe);
}
