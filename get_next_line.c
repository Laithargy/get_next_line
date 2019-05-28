/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 19:00:24 by mzhu              #+#    #+#             */
/*   Updated: 2019/05/28 19:33:56 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
//#include "get_next_line.h"
# ifndef BUFF_SIZE
# define BUFF_SIZE 32

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strnew(size_t size)
{
	size_t i;
	char *tmp;

	i = 0;
	if(!(tmp = (char*)malloc(sizeof(char) * (size +1))))
		return (NULL);
	while (i < size)
		tmp[i] = '\0';
	return (tmp);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *cat;
	int i;
	int j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(cat = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[i])
	{
		cat[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		cat[i + j] = s2[j];
		j++;
	}
	cat[i + j] = '\0';
	return (cat);
}

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
			i++;
	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}

int		get_next_line(const int fd, char **line)
{
	char *tmp;
	char buf[BUFF_SIZE];
	char *s1;
	
	while (read(fd, &buf, BUFF_SIZE) > 0)
	{
		if (!(tmp = (char*)malloc(sizeof(char) * BUFF_SIZE + 1)))
			return (NULL);
		tmp = buf;
		if (ft_strchr(tmp, '\n') != NULL)
		{
			ft_memccpy(line, tmp, '\n', BUFF_SIZE);
			line = s1;
			return (1);
		}
	}
}

int		main(void)
{
	int rd;
	char *line;

	rd = open(ft_putstr.c, O_RDONLY);
	while (get_next_line(ft_pustr.c, &line) = 1)
	{
		write(rd, line, ft_strlen(line));
		ft_putendl(line);
		free(line);
	}
	return (0);
}

#endif
