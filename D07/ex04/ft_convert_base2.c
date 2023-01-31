/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 15:41:09 by asanson           #+#    #+#             */
/*   Updated: 2020/09/26 19:07:13 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkbase(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 33)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int		convchar(char nbr, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == nbr)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *nbr, char *base_from, int basenum)
{
	int i;
	int c;
	int nb;

	i = 0;
	c = 1;
	nb = 0;
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			c = c * -1;
		i++;
	}
	while (convchar(nbr[i], base_from) != -1)
	{
		nb = (basenum * nb) + convchar(nbr[i], base_from);
		i++;
	}
	return (nb * c);
}

int		ft_base10(char *nbr, char *base_from)
{
	int i;

	i = 0;
	while (base_from[i])
		i++;
	return (ft_atoi_base(nbr, base_from, i));
}
