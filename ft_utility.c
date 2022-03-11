/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantivi <csantivi@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:23:42 by csantivi          #+#    #+#             */
/*   Updated: 2022/03/11 18:53:46 by csantivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_s(char *s)
{
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	ft_print_d(int n)
{
	int		size;
	char	*str;

	str = ft_itoa(n);
	size = ft_print_s(str);
	free(str);
	return (size);
}

int	ft_print_u(unsigned int n)
{
	int		size;
	char	*str;

	str = ft_itoa_u(n);
	size = ft_print_s(str);
	free(str);
	return (size);
}
