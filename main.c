/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:47:38 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/11/11 19:36:45 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	len;

	len = ft_printf("Hellow %s! %d + %i = %u\n", "worldZ", 40, 2, 42U);
	ft_printf("hex: %x / %X, ptr: %p, percent: %%, char: %c\n",
		255, 255, &len, 'A');
	ft_printf("printed %d characters\n", len);
	return (0);
}
