/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:23:42 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/10 21:57:19 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && j + i < len && needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
//this some gross ass code idk how i even got this to work. Im also now 
//slightly confused about how nested while loops even work.
//works withouth the && i < len in the fist while loop, but i think its slower
//if its not there
/*
int	main(void)
{
	char	*hay = "bigJuan";
	char	*need = "igJ";
	size_t	num = 4;
	printf("%s\n", ft_strnstr(hay, need, num));
	printf("%s\n", strnstr(hay, need, num));
}
*/
