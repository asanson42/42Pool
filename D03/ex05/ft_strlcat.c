/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:25:54 by asanson           #+#    #+#             */
/*   Updated: 2020/09/16 15:05:20 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len_src;
	unsigned int len_dest;
	unsigned int i;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size == 0)
		return (len_src);
	while (src[i] && (len_dest + i) < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	if (size > len_dest)
		return (len_dest + len_src);
	return (size + len_src);
}
