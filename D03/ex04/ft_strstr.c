/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:16:34 by asanson           #+#    #+#             */
/*   Updated: 2020/09/16 14:37:55 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int len_to_find;
	int len_str;

	i = 0;
	len_to_find = ft_strlen(to_find);
	len_str = ft_strlen(str);
	if (len_to_find == 0)
		return (str);
	if (len_to_find > len_str)
		return (0);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
