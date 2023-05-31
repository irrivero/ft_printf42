/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:43:56 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/31 14:53:58 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long n, int *d)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, d);
		ft_puthex(n % 16, d);
	}
	else if (n < 10)
		ft_putchar(n + 48, d);
	else
		ft_putchar(n + 87, d);
}