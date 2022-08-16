/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:16:36 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/16 15:15:25 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*retv;
	size_t	strl;

	if (!s)
		return (NULL);
	strl = ft_strlen(s);
	if (start > strl)
		len = 0;
	else if (strl - start < len)
		len = strl - start;
	retv = (char *)malloc(sizeof(*retv) * (len + 1));
	if (!retv)
		return (NULL);
	retv = ft_memmove(retv, s + start, len);
	retv[len] = '\0';
	return (retv);
}
	//while (j < len)
	//	retv[j++] = s[start++];
	//these lines above can be used instead of memcpy, just need size_t j
//adding lines 21+22 and then changing it to strlen(s) instead of (start + s)
//fixed it because strlen was doing funny business and causing an error
//also return null is same as return 0
//
//made it pass --strict on francinette (allocating the exact amount of memory,
//not just len bytes, and allocating 1 byte if start is larger than s length)
//did this with the first if statement for the 1 byte thing, and making
//the else i test strlen(s) - start instead of just strlen(s)
//					^^strlen(s + start) also works
/*{
	char			*retv;
	unsigned int	i;

	i = 0;
	if (!s[start])
		len = 0;
	else if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);	
	retv = (char *)malloc(sizeof(char) * (len + 1));
	if (!retv)
		return (NULL);
	while (i < len && s[start + i])
	{
		retv[i] = s[start + i];
		i++;
	}
	retv[i] = '\0';
	return (retv);
}*/
/*
{
   if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	retv = (char *)malloc(sizeof(char) * len);
	if (!retv)
		return (NULL);
	ft_memmove((void *)retv, (void *)s + start, len);
	return (retv);
}*/
/*
int	main(void)
{
	char	*dong = "whatda";

	//printf("%zu\n", ft_strlen((void *)&dong[2]));
	printf("%s\n", ft_substr(dong, 10, 2));
}
*/
