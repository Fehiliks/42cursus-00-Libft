/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:54:13 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/15 19:38:41 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digcount(long d)
{
	size_t	count;

	count = 0;
	if (d == 0)
		return (1);
	while (d)
	{
		count++;
		d /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*intstr;
	size_t	digic;
	long	dong;

	dong = n;
	n = 0;
	if (dong < 0)
	{
		n = 1;
		dong = -dong;
	}
	digic = ft_digcount(dong);
	intstr = (char *)malloc(sizeof(*intstr) * (digic + n + 1));
	if (!intstr)
		return (NULL);
	intstr[0] = '-';
	intstr[digic + n] = '\0';
	while (digic--)
	{
		intstr[digic + n] = ((dong % 10) + 48);
		dong /= 10;
	}
	return (intstr);
}
//was able to get a working prototype fairly easily with the my code at the
//bottom fairly simply. Just was a bit too long for norminette. Split
//it up into two functons and then added something to check for '0';
/*
int	main(void)
{
	int	n = -360;

	printf("%s\n", ft_itoa(n));
}*/
/*{
	char	*intstr;
	size_t	digic;
	int		isneg;
	int		dong;
	int		funnynum;

	isneg = 0;
	digic = 0;
	funnynum = 0;
	if (n == -2147483648)
	{
		funnynum = 1;
		isneg = 1;
		digic++;
		n = 147483648;
	}
	if (n < 0)
	{
		isneg = 1;
		n = -n;
	}
	dong = n;
	while (dong > 9)
	{
		digic++;
		dong /= 10;
	}
	if (dong < 10 && dong >= 0)
		digic++;
	dong = digic + isneg;
	intstr = (char*)malloc(sizeof(*intstr) * (dong + 1));
	if (!intstr)
		return (NULL);
	intstr[dong--] = '\0';
	while (n > 9)
	{
		intstr[dong--] = ((n % 10) + 48);
		n /= 10;
	}
	if (n < 10 && n >= 0)
		intstr[dong--] = n + 48;
	if (funnynum == 1)
		intstr[dong--] = 2 + 48;
	if (isneg == 1)
		intstr[dong] = '-';
	return (intstr);
}*/
