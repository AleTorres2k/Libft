/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:07:50 by aletorre          #+#    #+#             */
/*   Updated: 2023/04/28 13:37:47 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*pointer;
	size_t	memory;

	memory = count * size;
	pointer = malloc(memory);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, memory);
	return (pointer);
}
/*
int	main(void)
{
	char *ptr;

	ptr = malloc(50);
	return (0);
}
*/