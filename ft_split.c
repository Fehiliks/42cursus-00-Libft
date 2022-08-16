/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:53:09 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/16 19:36:28 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_freethings(char	**dingus, size_t i)
{
	while (i--)
		free(dingus[i]);
	free(dingus);
	return (NULL);
}

static int	ft_split_count(char const *s, char c)
{
	size_t			i;
	int				wordcount;

	i = 0;
	wordcount = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			wordcount++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (wordcount);
}

char	**ft_anotherone(char **dingus, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			dingus[k] = ft_substr(&s[j], 0, i - j);
			if (!dingus[k])
				return (ft_freethings(dingus, k));
			k++;
		}
	}
	dingus[k] = NULL;
	return (dingus);
}

char	**ft_split(char const *s, char c)
{
	char	**arstr;

	arstr = (char **)malloc(sizeof(char *) * (ft_split_count(s, c) + 1));
	if (!arstr)
		return (NULL);
	return (ft_anotherone(arstr, s, c));
}
//so turns out the 'delimiter' char can be many of the same thing in a row
//before it is supposed to split the string. It also wont do anything if its
//the very first character/s in the string
//
//no idea how to get it to pass francinette --strict. The error is something
//about not having the mallocs after the first one be protected, and
//any malloc for a 'word' more than one char long apparently has unfreed bytes
//
//UPDATE: finally got it to pass --strict thanks to Tim. The issue is that
//when you return NULL, literally everything that has been mallocd before
//that needs to be freed. So that means every string in the arstr array
//needs to be freed, as well as arstr itself. AM DONE WITH LIBFT NOW 
//(other than the bonus ones which ill do later)
//Took a little while
//to split it down into a few functions to pass the 25 line limit though.
/*int	main(void)
{
	char	**dingus;
	char	*str = "!!!split!me!up111!!please!!!!!a!!!";
	size_t	i;

	printf("%d\n", ft_split_count(str, '!'));
	i = 0;
	dingus = ft_split(str, '!');
	while (dingus[i])
		printf("%s|\n", dingus[i++]); 
}*/
//
/*{	
	char	**arstr;
	size_t	splitcount;
	size_t	i;
	size_t	k;
	size_t	w;

	i = 0;
	splitcount = 0;
	while (s[i])
	{
		if (s[i] == c)
			splitcount++;
		i++;
	}
	printf("%zu|\n", splitcount);
	arstr = (char **)malloc(sizeof(**arstr) * (splitcount + 1));
	if (!arstr || !s)
		return (0);
	i = 0;
	k = 0;
	w = 0;
	printf("%zu|\n", splitcount);
	arstr[0][0] = 'x';
	printf("%zu|\n", splitcount);
	while (s[i])
	{
		arstr[k][w] = s[i];
		w++;
		if (s[i] == c)
		{
			arstr[k][w] = '\0';
			k++;
			w = 0;
		}
		i++;
	}
	arstr[k][w] = '\0';
	printf("%zu|\n", splitcount);
	arstr[k] = NULL;
	return (arstr);
}*/
