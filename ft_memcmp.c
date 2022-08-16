/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 23:33:55 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/08 00:36:30 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cs1;
	const unsigned char	*cs2;

	cs1 = (const unsigned char *)s1;
	cs2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*(cs1++) != *(cs2++))
			return (*(--cs1) - *(--cs2));
		n--;
	}
	return (0);
}
//this whole function is another case of me using funny pointer arithimitic
//stuff, its kinda monkey mode and really dumb and bad and not good etc
//
/* this commented code below actually does the exact same thing, hectic af.
 * only problem is its actually too long for norminette with proper indentation
{
	while (n > 0)
	{
	if (*((const unsigned char *)s1++) != *((const unsigned char *)s2++))
	return (*((const unsigned char *)--s1) - *((const unsigned char *)--s2));
	n--;
	}
	return (0);
}
*/
