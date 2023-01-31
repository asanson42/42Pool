/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 13:07:21 by asanson           #+#    #+#             */
/*   Updated: 2020/09/09 14:03:58 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	fonction_utile(int num)
{
	ft_putchar(num / 10 + '0');
	ft_putchar(num % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first < 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			fonction_utile(first);
			ft_putchar(' ');
			fonction_utile(second);
			if (first != 98)
			{
				write(2, ", ", 2);
			}
			second++;
		}
		first++;
	}
}
