/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 00:15:24 by mzhu              #+#    #+#             */
/*   Updated: 2019/05/01 02:43:42 by mzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tp;

	i = 0;
	if (!s && !f)
		return (NULL);
	if (!(tp = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	if (s && f)
	{
		while (s[i])
		{
			tp[i] = f(i, s[i]);
			i++;
		}
		tp[i] = '\0';
		return (tp);
	}
	return (NULL);
}
