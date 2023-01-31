/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 19:22:14 by asanson           #+#    #+#             */
/*   Updated: 2020/09/29 08:44:52 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_charset(char c, char *charset)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (charset[j])
		j++;
	if (j < 1)
		return (-1);
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		count_word(char *src, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (ft_is_charset(src[i], charset) == -1)
		return (1);
	while (src[i])
	{
		while (ft_is_charset(src[i], charset) && src[i])
			i++;
		if (src[i])
			count++;
		while (!ft_is_charset(src[i], charset) && src[i])
			i++;
	}
	return (count);
}

int		ft_get_size(char *src, char *charset, int i)
{
	int j;
	int count;
	int k;

	k = 0;
	j = i;
	count = 0;
	if (ft_is_charset(src[i], charset) == -1)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (ft_is_charset(src[i], charset) && src[i])
	{
		i++;
		count++;
	}
	while (!ft_is_charset(src[i], charset) && src[i])
		i++;
	return (i - j - count);
}

char	**ft_null(char **tab, char *src, char *charset)
{
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	size = ft_get_size(src, charset, 0);
	tab[0] = malloc(sizeof(char) * (size + 1));
	if (size != 0)
	{
		while (ft_is_charset(src[i], charset) == 1)
			i++;
		while (j < size)
		{
			tab[0][j] = src[i];
			j++;
			i++;
		}
		tab[0][j] = '\0';
		tab[1] = 0;
	}
	else
		tab[0] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		count;
	int		i;
	int		j;
	int		k;

	count = 0;
	i = 0;
	tab = malloc(sizeof(char*) * (count_word(str, charset) + 1));
	if (count_word(str, charset) == 1)
		return (ft_null(tab, str, charset));
	while (count < count_word(str, charset))
	{
		j = ft_get_size(str, charset, i);
		while (ft_is_charset(str[i], charset))
			i++;
		tab[count] = malloc(sizeof(char) * (j + 1));
		k = 0;
		while (k <= j)
			tab[count][k++] = str[i++];
		tab[count][j] = '\0';
		count++;
	}
	tab[count] = 0;
	return (tab);
}
