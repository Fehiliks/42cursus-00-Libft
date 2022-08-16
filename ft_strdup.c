/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:13:09 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/15 20:42:43 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*retv;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	retv = (char *)malloc(sizeof(const char) * (s1_len + 1));
	if (retv == NULL)
		return (NULL);
	ft_memmove((void *)retv, (void *)s1, s1_len + 1);
	return (retv);
}
/*
int	main(void)
{
//	char	str[0];
	char *xstr = NULL;

	//printf("%zu\n", strlen(xstr));
	printf("%s", strdup(xstr));
}
*/
//was surprised at the fix to this, the if retv == NULL part pretty much is 
//only checking if it actually had enough memory to allocate or not. It doesnt
//need to check if *s1 is a null pointer because that will break the whole
//thing anyway which is fine
