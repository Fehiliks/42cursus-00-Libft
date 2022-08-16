/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:07:11 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/12 21:11:58 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l] != '\0')
		l++;
	return (l);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%zu\n", ft_strlen("heck you"));
	printf("%zu\n", strlen("heck you"));
}
*/
