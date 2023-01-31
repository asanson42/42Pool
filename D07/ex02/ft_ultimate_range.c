/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 15:23:26 by asanson           #+#    #+#             */
/*   Updated: 2020/09/27 19:21:15 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = max - min - 1;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	if (!(range[0] = malloc(sizeof(int) * i)))
		return (-1);
	i = 0;
	while (min < max)
		range[0][i++] = min++;
	range[0][i] = '\0';
	return (i);
}
