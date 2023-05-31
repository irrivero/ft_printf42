/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:27:47 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/31 15:31:25 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printsi(const char *tipo, va_list args, int *i, int *d)
{
	if (tipo[*i] == '%')
		ft_putchar(tipo[*i], d);
	else if (tipo[*i] == 'c')
		ft_putchar(va_arg(args, int), d);
	else if (tipo[*i] == 'd' || tipo[*i] == 'i')
		ft_putnbr(va_arg(args, int), d);
	else if (tipo[*i] == 'u')
		ft_putud(va_arg(args, unsigned int), d);
	else if (tipo[*i] == 'x')
		ft_puthex(va_arg(args, unsigned int), d);
	else if (tipo[*i] == 'X')
		ft_puthexu(va_arg(args, unsigned int), d);
	else if (tipo[*i] == 'p')
		ft_putpunt(va_arg(args, void *), d);
	else if (tipo[*i] == 's')
		ft_putstr(va_arg(args, char), d);
	*i += 1;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		n;
	int		d;

	va_start(args, format);
	i = 0;
	n = ft_strlen(format);
	d = 0;
	while(format[i] && i < n)
	{
		if (format[i] != '%')
			ft_putchar(format[i++], &d);
		else if(i < n)
		{
			i++;
			ft_printsi(format, args, &i, &d);
		}
	}
	va_end(args);
	return (d);
}