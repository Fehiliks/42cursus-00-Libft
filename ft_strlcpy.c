/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:38:37 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/04 00:36:33 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while ((dstsize - 1) > 0 && src[i])
		{
			dst[i] = src[i];
			i++;
			dstsize--;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	*lol = "fugc";
	char	xd[240] = "BearOnTheRoof";
	printf("yay?\n");
	printf("%zu\n", strlcpy(xd, lol, 3));
	//printf("%zu\n", ft_strlcpy(xd, lol, 3));
	printf("%s\n", xd);
}
*/
