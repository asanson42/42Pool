/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 04:43:58 by asanson           #+#    #+#             */
/*   Updated: 2020/09/13 04:49:13 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	while (*str != ('\0'))
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
