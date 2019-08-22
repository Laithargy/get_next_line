/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 19:00:24 by mzhu              #+#    #+#             */
/*   Updated: 2019/08/22 16:56:40 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int rd;
	char *line;
    int i;
    
    i = 1;
    if (!(line = (char*)malloc(sizeof(char) * BUFF_SIZE + 1)))
        return (0);
	if (ac == 2)
	{
		if (!(rd = open(av[1], O_RDONLY)))
			return (-1);
		while ((get_next_line(rd, &line) == 1))
		{
            printf("%d : %s\n", i, line);
			free(line);
			i++;
		}
	}
	return (0);
}
