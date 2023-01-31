/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 05:07:43 by asanson           #+#    #+#             */
/*   Updated: 2020/09/15 18:32:15 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_str_is_lowercase(char c)
{
	if (c < 97 || c > 122)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	ft_strlowercase(str);
	while (str[i])
	{
		if (ft_str_is_lowercase(str[i]))
		{
			if ((str[i - 1] < 48 || str[i - 1] > 57)
				&& (str[i - 1] < 97 || str[i - 1] > 122)
				&& (str[i - 1] < 65 || str[i - 1] > 90))
				str[i] = str[i] - 32;
		}
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	return (str);
}
