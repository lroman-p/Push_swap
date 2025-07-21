/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:02:18 by lroman-p          #+#    #+#             */
/*   Updated: 2024/03/03 13:02:53 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...);

int	ft_printf_unsigned(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size += ft_printf_char('0');
	else
	{
		if (n / 10 != 0)
			size += ft_printf_unsigned(n / 10);
		ft_printf_char((n % 10) + '0');
		size++;
	}
	return (size);
}
