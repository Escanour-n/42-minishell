/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouakhro <nouakhro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:19:24 by nouakhro          #+#    #+#             */
/*   Updated: 2023/04/21 01:08:04 by nouakhro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	exicut_commande(t_all *my_struct, int i, int c_of_s)
{
	// if (quote_check(&my_struct) == 0)
	// 	printf("error\n");
	// if (!ft_strncmp(my_struct->each_cmd[c_of_s].cmd[0], "cd", ft_strlen("cd")))
	// 	exit(1);
	// else if (!ft_strncmp(my_struct->each_cmd[c_of_s].cmd[0], "echo", ft_strlen("echo")))
	// {
	// 	exicut_echo(&my_struct);
	// }
	if (!ft_strncmp(my_struct->cmd, my_struct->cmd,
				ft_strlen(my_struct->cmd)))
	{
		// int k = 0 ;
		// while (my_struct->each_cmd[c_of_s].files->files)
		// {
		// 	printf("{%s}\n", my_struct->my_path[i]);
		// 	printf("[%s]\n",my_struct->each_cmd[c_of_s].files->files);
		// 	k++;
		// }
		if(my_struct->each_cmd[c_of_s].files)
		{
			check_rediractions(my_struct, c_of_s);
		}
		execve(my_struct->my_path[i], my_struct->each_cmd[c_of_s].cmd, NULL);
	}
}