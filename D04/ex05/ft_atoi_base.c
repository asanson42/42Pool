/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 12:06:37 by asanson           #+#    #+#             */
/*   Updated: 2020/09/18 12:31:04 by asanson          ###   ########.fr       */
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

int		conv_char(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		put_atoi(char *str, char *base, int basenum)
{
	int i;
	int c;
	int nb;

	i = 0;
	c = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c = c * -1;
		i++;
	}
	while (conv_char(str[i], base) != -1)
	{
		nb = (basenum * nb) + conv_char(str[i], base);
		i++;
	}
	return (nb * c);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	if (!(checkbase(base)))
		return (0);
	return (put_atoi(str, base, i));
}
