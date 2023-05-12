/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouakhro <nouakhro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:36:27 by nouakhro          #+#    #+#             */
/*   Updated: 2023/05/12 01:21:18 by nouakhro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*b;

	b = malloc(size * count);
	// printf("%p\n", b);
	if (b)
		ft_bzero(b, (size * count));
	return (b);
}
