/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:12:50 by fgardine          #+#    #+#             */
/*   Updated: 2022/08/02 23:21:34 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len > 0)
	{
		((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
		len--;
	}
	return (dst);
}
/*
{
	unsigned char	*temp;

	if (dst == NULL && src == NULL)
		return (NULL);
	temp = (unsigned char *)malloc(sizeof(unsigned char) * len);
	if (temp == NULL)
		return (NULL);
	ft_memcpy(temp, src, len);
	ft_memcpy(dst, temp, len);
	free(temp);
	return (dst);
}
*/
//all this above stuff was my first attempt while using malloc,
//francinette didnt like it for a reason i think is wrong, but i also
//decided to use the direction of copy method cuz its actually more effecient
//and its how the library memmove does it too
/*
#include <string.h>
int	main(void)
{
	char	*testsrc = "the cake is a lie !\0I'm hidden lol\r\n";
	char	buff[0xF0];

	char	*ret = ft_memmove(buff, testsrc, 100);
	if (ret == ((void *)0))
		printf("fail");
	printf("not fail lol");
		//printf("%p", ft_memmove(buff, testsrc, 100));
		//printf("%p", memmove(buff, testsrc, 100));
}
*/
