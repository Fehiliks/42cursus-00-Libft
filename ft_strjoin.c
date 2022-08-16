/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 23:55:32 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/12 22:14:47 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	ls1;
	size_t	ls2;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	newstr = (char *)malloc(ls1 + ls2 + 1);
	if (!newstr || !s1 || !s2)
		return (0);
	ft_memmove(newstr, s1, ls1);
	ft_memmove(newstr + ls1, s2, ls2);
	newstr[ls1 + ls2] = '\0';
	return (newstr);
}
//well this took me prolly about 6 hours just to figure out this line of code
//below was the problem:
//	newstr[ft_strlen(newstr)] = '\0';
//
//	for whatever reason, the function still kinda works while using that, but
//	the francinette testers get all goofy with it and say stuff is going wrong
//	that in my testing, actually wasnt. But i can see why it shouldnt work.
//
//	this code below also passes francinette. Doesnt use ft_memmove like mine.
/*{
	char	*newstr;
	size_t	i;
	size_t	j;

	newstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstr || !s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
		newstr[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		newstr[i++] = s2[j++];
	newstr[i] = '\0';
	return (newstr);
}*/
/*
int	main(void)
{
//	char	*st1 = "";
//	char	*st2 = "the";

	//printf("%s st1\n", st1);
	//printf("%zu st1l\n", ft_strlen(st1));
	char	*s = ft_strjoin("drundlegrong gibby dong", "42");
	printf("%s#strjoin\n", s);
	char	*x = ft_strjoin(s, "smh dongus");
	printf("%s#secondstrj\n", x);
	//printf("%d#compare\n", strcmp(s, "42"));
}
*/
