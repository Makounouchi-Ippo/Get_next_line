/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 12:01:56 by mehel-ka          #+#    #+#             */
/*   Updated: 2017/11/20 19:02:26 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (s2[i] == 0)
		return ((char*)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && i + j < len)
		{
			if (s2[j + 1] == '\0')
				return ((char*)&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
