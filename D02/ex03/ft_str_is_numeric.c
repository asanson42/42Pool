/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 04:33:17 by asanson           #+#    #+#             */
/*   Updated: 2020/09/15 16:38:22 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	while (*str != ('\0'))
	{
		if (*str < 48 || *str > 57)
			return (0);
		str++;
	}
	return (1);
}
