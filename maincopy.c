/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:47:38 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/11/17 12:59:31 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	len;

	len = printf("Hellow %s! %d + %i = %u\n", "worldZ", 40, 2, 42U);
	printf("hex: %x / %X, ptr: %p, percent: %%, char: %c\n",
		255, 255, &len, 'A');
	printf("printed %d characters\n", len);
	return (0);
}
