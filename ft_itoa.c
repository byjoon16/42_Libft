/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byjeon <byjeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:59:00 by byjeon            #+#    #+#             */
/*   Updated: 2022/05/19 16:02:29 by byjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_abs(int n)
{
	long long	num;

	num = n;
	if (n < 0)
		return (num * -1);
	return (num);
}

int	ft_len(int n)
{
	int			len;
	long long	num;

	len = 0;
	num = ft_abs(n);
	if (num == 0)
		return (1);
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	long long	num;
	int			i;
	int			len;

	i = 1;
	num = ft_abs(n);
	len = ft_len(n);
	if (n < 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	while (i <= len)
	{
		if (str[len - i] != '-')
			str[len - i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	str[len] = '\0';
	return (str);
}
