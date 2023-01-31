/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:42:30 by asanson           #+#    #+#             */
/*   Updated: 2020/09/16 17:07:10 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rec_base(char *base, char *basetmp)
{
	int i;

	i = 0;
	while (base[i])
	{
		basetmp[i] = base[i];
		i++;
	}
	basetmp[i] = '\0';
}

int		checkbase(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
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

void	ft_base(long int nb, char *base)
{
	int		basenum;
	char	basetmp[100];

	basenum = 0;
	ft_rec_base(base, basetmp);
	while (basetmp[basenum])
		basenum++;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= basenum)
	{
		ft_base(nb / basenum, basetmp);
		ft_putchar(base[nb % basenum]);
	}
	if (nb < basenum)
		ft_putchar(basetmp[nb % basenum]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (checkbase(base))
		ft_base(nbr, base);
}
