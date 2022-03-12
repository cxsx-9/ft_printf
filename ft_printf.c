/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantivi <csantivi@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:40:26 by csantivi          #+#    #+#             */
/*   Updated: 2022/03/11 22:39:10 by csantivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check(va_list args, const char str)
{
	if (str == 'c')
		return (ft_print_c(va_arg(args, int)));
	else if (str == 's')
		return (ft_print_s(va_arg(args, char *)));
	else if (str == 'p')
		return (ft_print_p(va_arg(args, unsigned long)));
	else if (str == 'd' || str == 'i')
		return (ft_print_d(va_arg(args, int)));
	else if (str == 'u')
		return (ft_print_u(va_arg(args, unsigned int)));
	else if (str == 'x' || str == 'X')
		return (ft_print_x(va_arg(args, unsigned int), str));
	else if (str == '%')
		return (ft_print_c('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			length;
	int			i;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += check(args, str[i + 1]);
			i++;
		}
		else
			length += ft_print_c(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
