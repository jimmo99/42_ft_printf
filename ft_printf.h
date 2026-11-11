/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 13:09:26 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/11/11 18:30:52 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printnbr(int n);
int	ft_printunsignednbr(unsigned int n);
int	ft_printhexadecimal(unsigned int n, char format);
int	ft_printpointer(unsigned long ptr);
int	ft_printf(char const *str, ...);

#endif
