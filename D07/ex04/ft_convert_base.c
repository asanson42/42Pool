/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:01:06 by asanson           #+#    #+#             */
/*   Updated: 2020/09/27 19:21:56 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		checkbase(char *base);
int		ft_base10(char *nbr, char *base_from);

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

char	*ft_base_to(char *base_to, long int nbr, char *result, int i)
{
	int basenum;

	i--;
	basenum = ft_strlen(base_to);
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = nbr * -1;
	}
	if (nbr >= basenum)
	{
		ft_base_to(base_to, nbr / basenum, result, i);
		result[i] = base_to[nbr % basenum];
	}
	if (nbr < basenum)
		result[i] = base_to[nbr % basenum];
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			nb;
	long int	i;
	int			size;
	int			n;
	char		*result;

	i = ft_strlen(base_to);
	size = 1;
	if (checkbase(base_from) && checkbase(base_to))
	{
		nb = ft_base10(nbr, base_from);
		if (nb < 0)
			size++;
		n = nb;
		while (n / i != 0)
		{
			size++;
			n = n / i;
		}
		result = malloc(sizeof(char) * (size - 1));
		ft_base_to(base_to, nb, result, size);
		result[size] = '\0';
		return (result);
	}
	return (0);
}
