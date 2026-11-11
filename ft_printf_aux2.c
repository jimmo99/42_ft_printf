/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 13:10:07 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/11/11 15:05:20 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(unsigned long ptr)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (ptr >= 16)
		count += ft_printpointer(ptr / 16);
	write(1, &base[ptr % 16], 1);
	count++;
	return (count);
}
