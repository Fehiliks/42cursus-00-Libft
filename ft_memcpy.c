/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:44:06 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/14 19:30:25 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*chrdst;
	const unsigned char	*chrsrc;

	chrdst = (unsigned char *)dst;
	chrsrc = (unsigned char *)src;
	while (n > 0)
	{
		if (chrdst == NULL && chrsrc == NULL)
			return (dst);
		*chrdst = *chrsrc;
		chrdst++;
		chrsrc++;
		n--;
	}
	return (dst);
}
//few ways to do this one but i used the funny *pointer assignment things
//edit: theyre called pointer arithimitic i think
//also my ft_memmove uses malloc i think which is f kajfkahdfakj
