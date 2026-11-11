/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 13:10:07 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/11/11 15:13:18 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	long	numb;
	char	l_numb;
	int		count;

	numb = n;
	count = 0;
	if (numb < 0)
	{
		write(1, "-", 1);
		count++;
		numb = -numb;
	}
	if (numb >= 10)
		count += ft_printnbr(numb / 10);
	l_numb = (numb % 10) + '0';
	write(1, &l_numb, 1);
	count++;
	return (count);
}

int	ft_printunsignednbr(unsigned int n)
{
	char	l_numb;
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_printunsignednbr(n / 10);
	l_numb = (n % 10) + '0';
	write(1, &l_numb, 1);
	count++;
	return (count);
}

int	ft_printhexadecimal(unsigned int n, char format)
{
	char	*base;
	char	current_digit;
	int		count;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_printhexadecimal(n / 16, format);
	current_digit = base[n % 16];
	write(1, &current_digit, 1);
	count++;
	return (count);
}
