/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouakhro <nouakhro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:19:24 by nouakhro          #+#    #+#             */
/*   Updated: 2023/04/27 17:46:38 by nouakhro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	exicut_commande(t_all *my_struct, int i, int c_of_s, int *pipe_n)
{
	(void)pipe_n;
	// printf("ffff\n");
	// i = 0;
	// while (my_struct->each_cmd[c_of_s].cmd[i])
	// {
	// 	printf("[%s]\n", my_struct->each_cmd[c_of_s].cmd[i]);
	// 	i++;
	// }
	if(my_struct->each_cmd[c_of_s].cmd[0] && ft_strchr(my_struct->each_cmd[c_of_s].cmd[0], '/'))
		execve(my_struct->each_cmd[c_of_s].cmd[0], my_struct->each_cmd[c_of_s].cmd, NULL);
	execve(my_struct->my_path[i], my_struct->each_cmd[c_of_s].cmd, NULL);
}