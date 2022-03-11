/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utility_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantivi <csantivi@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:55:44 by csantivi          #+#    #+#             */
/*   Updated: 2022/03/11 13:31:56 by csantivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long long p)
{
	int		size;
	char	*str;

	size = ft_print_s("0x");
	str = ft_itoa_base(p, 16);
	size += ft_print_s(str);
	free(str);
	return (size);
}

int	ft_print_x(unsigned int n, char s)
{
	int		size;
	int		i;
	char	*str;

	i = 0;
	str = ft_itoa_base(n, 16);
	if (s == 'X')
	{
		while (str[i] != 0)
		{
			str[i] = ft_toupper(str[i]);
			i++;
		}
	}
	size = ft_print_s(str);
	free(str);
	return (size);
}
