/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 13:10:07 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/11/01 14:10:58 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c);
//imprimir un solo caracter

int	ft_printstr(char *str);
//imprimir string

int	ft_printnbr(int n);
//imprimir numbers

int ft_printunsignednbr(unsigned int n);
//imprimir unsigned int

int	ft_printhexadecimal(unsigned int n, char format);
//imprimir hexadecimales

int	ft_printpointer(void *ptr);
//imprime pointers
