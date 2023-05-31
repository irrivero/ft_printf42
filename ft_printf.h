/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:23:35 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/31 15:44:39 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

void	ft_printsi(const char *tipo, va_list args, int *i, int *d);
void	ft_putchar(int c, int *d);
void	ft_putnbr(int n, int *d);
void	ft_putud(unsigned int n, int *d);
void	ft_puthex(unsigned long n, int *d);
void	ft_puthexu(unsigned int n, int *d);
void	ft_putpunt(void *ptr, int *d);
void	ft_putstr(const char *s, int *d);

size_t	ft_strlen(const char *s);

int		ft_printf(const char *format, ...);

#endif