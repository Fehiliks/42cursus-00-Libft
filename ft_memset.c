/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:49:11 by fgardine          #+#    #+#             */
/*   Updated: 2022/07/27 22:57:11 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*chstr;

	chstr = (char *)b;
	while (len > 0)
	{
		*chstr = (unsigned char)c;
		chstr++;
		len--;
	}
	return (b);
}
/*
{
	unsigned char C;
	size_t i;

	i = 0;
	C = (unsigned char)c;
	while ((char *)b)
	{
		while (i < len)
		{
			*((char)b)++ = C;
			//b++;
			i++;
		}
	}
	return (b);
}
*/
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*lol[8];

	printf("%s\n", (char *)ft_memset(lol, '2', 3));
	printf("%s\n", (char *)memset(lol, '2', 3));
}
*/
