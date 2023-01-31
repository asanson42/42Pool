/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 15:12:31 by asanson           #+#    #+#             */
/*   Updated: 2020/09/27 19:21:41 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = max - min - 1;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = malloc(sizeof(int) * i);
	i = 0;
	while (min < max)
		tab[i++] = min++;
	tab[i] = '\0';
	return (tab);
}
