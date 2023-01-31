/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:38:01 by asanson           #+#    #+#             */
/*   Updated: 2020/09/14 15:42:43 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(unsigned char deci)
{
	char *base;

	base = "0123456789abcdef";
	ft_putchar(92);
	ft_putchar(base[deci / 16]);
	ft_putchar(base[deci % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 32 && str[count] <= 126)
			ft_putchar(str[count]);
		if (!(str[count] >= 32 && str[count] <= 126))
			ft_print_hexa(str[count]);
		count++;
	}
}
