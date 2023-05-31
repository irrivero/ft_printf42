/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:50:51 by irivero-          #+#    #+#             */
/*   Updated: 2023/05/31 15:48:23 by irivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexu(unsigned int n, int *d)
{
	if (n >= 16)
	{
		ft_puthexu(n / 16, d);
		ft_puthexu(n % 16, d);
	}
	else if (n < 10)
		ft_putchar(n + 48, d);
	else
		ft_putchar(n + 55, d);
}
