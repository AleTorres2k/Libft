/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:53:21 by aletorre          #+#    #+#             */
/*   Updated: 2023/04/27 14:32:12 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//This function capitalize the lower case characters

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}
/*
int	main(void)
{
	printf("%c", ft_toupper('f'));
	return (0);
}
*/
