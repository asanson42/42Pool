/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:23:58 by asanson           #+#    #+#             */
/*   Updated: 2020/09/16 18:44:41 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_num(char c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

int		ft_char_is_ws(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
			|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int c;
	int n;

	i = 0;
	c = 1;
	n = 0;
	while (ft_char_is_ws(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			c = c * -1;
			i++;
		}
		else
			i++;
	}
	while (ft_char_is_num(str[i]))
	{
		n = (str[i] - 48) + (10 * n);
		i++;
	}
	return (n * c);
}
