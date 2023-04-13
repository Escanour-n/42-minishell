/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouakhro <nouakhro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:51:21 by nouakhro          #+#    #+#             */
/*   Updated: 2023/04/13 17:52:14 by nouakhro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char	*str)
{
	int	i;
	if(!str && !*str)
		return 0;
	i = 0;
	while (str[i])
	{
		// printf("====>%s\n", str);	
		i++;

	}
	return (i);
}
