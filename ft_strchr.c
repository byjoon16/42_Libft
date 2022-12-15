/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byjeon <byjeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:18:24 by byjeon            #+#    #+#             */
/*   Updated: 2022/05/19 17:10:34 by byjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tab;

	i = 0;
	tab = (char *)s;
	while (tab[i] != c)
	{
		if (tab[i] == '\0')
			return (NULL);
		i++;
	}
	return (&tab[i]);
}
