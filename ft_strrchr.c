/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 21:31:50 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/07 22:33:12 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
//this one took a surprising amount of time even tho i had the right idea
//the first try, the problem was i was using size_t instead of int i, and 
//because size_t cant be negative, it would die when going below 0
/*
int	main(void)
{
	//char kek[240] = "abcde";
	char	*t0 = "\0";

	printf("%s", ft_strrchr(t0, '\0'));
}
*/
