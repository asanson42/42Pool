/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 16:19:01 by asanson           #+#    #+#             */
/*   Updated: 2020/09/18 16:21:52 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factor;
	int factorial;

	factor = 2;
	factorial = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (factor <= nb)
	{
		factorial = factorial * factor;
		factor++;
	}
	return (factorial);
}
