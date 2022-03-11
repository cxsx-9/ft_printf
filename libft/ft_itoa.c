/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantivi <csantivi@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:40:12 by csantivi          #+#    #+#             */
/*   Updated: 2022/03/02 23:13:30 by csantivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		c;
	int		neg;
	char	*str;

	c = count(n);
	neg = 1;
	str = (char *)malloc(sizeof(char) * (c + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		neg *= -1;
	}
	str[c] = 0;
	c--;
	while (c >= 0 && str[c] != '-')
	{
		str[c] = '0' + (neg * (n % 10));
		n /= 10;
		c--;
	}
	return (str);
}
