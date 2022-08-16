/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:47:46 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/13 21:49:17 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(&s1[i]);
	while (j && ft_strchr(set, s1[i + j]))
		j--;
	return (ft_substr(&s1[i], 0, j + 1));
}
/*int	main(void)
{
	char	*house = "zxyxzyzzzABCDSFSEFABzzxyzyxxy";
	char	*mouse = "xzy";

	printf("%s#\n", ft_strtrim(house, mouse));
}*/
//straight out the gate, this function seems rather vague in how it works
//and what it should do under specific conditions.
//Turns out its supposed to remove any number or combination of set characters
//that appear together, not just the exact string. The clever use of strchr 
//works very nicely for this as well as ft_substr for malloc and string creation
//
//the stuff below is just some spagetti code i made during my first attempt,
//barely works and is monke af
/*{
	char	*retv;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	q;

	i = 0;
	while (s1[i] == set[i])
		i++;
	j = ft_strlen(s1);
	q = ft_strlen(set);
	while (s1[j] == set[q])
	{
		j--;
		q--;
	}
	retv = (char *)malloc(ft_strlen(s1 + i) - (ft_strlen(s1) - j));
	if (!retv || !s1 || !set)
		return (0);
	retv[j - i] = '\0';
	k = 0;
	while (j >= i)
	{
		retv[k] = s1[i];
		i++;
		k++;
	}
	return (retv);
}*/
