/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:06:13 by aletorre          #+#    #+#             */
/*   Updated: 2023/04/26 10:34:18 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//This function returns the number of characters that there are in an array

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char array[50] = "Hola que tal";
	printf("%zu", ft_strlen(array));
	return (0);
}
*/
