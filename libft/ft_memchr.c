/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 20:05:51 by mehel-ka          #+#    #+#             */
/*   Updated: 2017/11/20 19:38:48 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	t;
	unsigned int	i;
	unsigned char	*s1;

	i = 0;
	s1 = (unsigned char*)s;
	t = (unsigned char)c;
	while (i < n)
	{
		if ((unsigned char)s1[i] == t)
			return (&s1[i]);
		i++;
	}
	return (0);
}
