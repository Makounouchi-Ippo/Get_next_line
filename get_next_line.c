/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:52:04 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/01/15 10:11:18 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		nlen(char *str, char c)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

void	suite(char **line, char **str)
{
	char	*tmp;

	tmp = NULL;
	*line = ft_strsub(*str, 0, nlen(*str, '\n'));
	tmp = ft_strsub(*str, nlen(*str, '\n') + 1,
			ft_strlen(&str[0][nlen(*str, '\n')]));
	ft_strdel(str);
	*str = tmp;
}

int		get_next_line(const int fd, char **line)
{
	static char	*str[OPEN_MAX];
	char		*tmp;
	char		buf[BUFF_SIZE + 1];
	int			ret;

	if (fd < 0 || read(fd, "", 0) < 0 || line == NULL || fd > OPEN_MAX)
		return (-1);
	if (!str[fd])
		str[fd] = ft_strnew(1);
	while (!(ft_strchr(str[fd], '\n')))
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret == 0)
			break ;
		buf[ret] = '\0';
		tmp = ft_strjoin(str[fd], buf);
		ft_strdel(&str[fd]);
		str[fd] = tmp;
	}
	if (ft_strlen(str[fd]) == 0)
		return (0);
	suite(line, &str[fd]);
	return (1);
}
