/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:55:52 by asanson           #+#    #+#             */
/*   Updated: 2020/09/16 14:31:03 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	n = n - 1;
	while ((s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0' && (i < n))
		i++;
	return (s1[i] - s2[i]);
}