/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:59:49 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/07 21:26:36 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
//this function got my really annoyed idk why. The whole way it works is kinda
//confusing and dumb, returning the length of the string it ATTEMPTS to make
//also it just kinda doesnt work properly if u dont give it enough dstsize etc
/*
int	main(void)
{
	char	dt[240] = "jungle";
	char	*sr = "fugc";
	printf("yay?\n");
//	printf("%zu\n", strlcat(dt, sr, 7));
	printf("%zu\n", ft_strlcat(dt, sr, 7));
	printf("%s\n", dt);
}
*/
