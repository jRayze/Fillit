/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamerlin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:21:34 by jamerlin          #+#    #+#             */
/*   Updated: 2016/12/12 15:23:41 by jamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_create_map(int size)
{
	char	**buf;
	int		j;
	int		i;

	j = 0;
	if (!(buf = (char **)malloc(sizeof(char *) * size + 1)))
		return (NULL);
	while (j < size)
	{
		i = 0;
		if (!(buf[j] = (char *)malloc(sizeof(char) * (size + 1))))
			return (NULL);
		while (i < size)
			buf[j][i++] = '.';
		buf[j][i] = '\0';
		j++;
	}
	buf[size] = NULL;
	return (buf);
}
