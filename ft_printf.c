/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 13:29:27 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/11/11 17:49:42 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_printchar(va_arg(args, int));
	else if (specifier == 's')
		count += ft_printstr(va_arg(args, char *));
	else if (specifier == 'p')
		count += ft_printpointer(va_arg(args, unsigned long));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_printnbr(va_arg(args, int));
	else if (specifier == 'u')
		count += ft_printunsignednbr(va_arg(args, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		count += ft_printhexadecimal (va_arg(args, unsigned int), specifier);
	else if (specifier == '%')
		count += ft_printchar ('%');
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		total_len;

	if (!str)
		return (-1);
	i = 0;
	total_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			total_len += ft_format(str[i], args);
		}
		else
		{
			write(1, &str[i], 1);
			total_len++;
		}
		i++;
	}
	va_end(args);
	return (total_len);
}
