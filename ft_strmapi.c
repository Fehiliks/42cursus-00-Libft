/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 20:18:15 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/15 21:21:58 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstring;
	unsigned int	i;

	newstring = (char *)malloc(sizeof(*newstring) * (ft_strlen(s) + 1));
	if (!newstring)
		return (0);
	i = 0;
	while (s[i])
	{
		newstring[i] = f(i, s[i]);
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
//pretty straightforward function once the concept of a function as another
//function's paramater is understood. As a test, i made a test function to use
//that just sets a given character to the value of the int also given. This 
//works nicely to demonstrate ft_strmapi
/*char	test_function(unsigned int i, char c)
{
	c = i + 48;
	return (c);
}
int	main(void)
{
	char	*str = "ayyy lmaoo";
	
	//printf("%lu\n", sizeof(char *));

	printf("%s\n\n", str);
	printf("%s\n", ft_strmapi(str, test_function));
}*/
