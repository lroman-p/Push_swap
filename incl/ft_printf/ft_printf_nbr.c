/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42madrid.comr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:46:19 by lroman-p          #+#    #+#             */
/*   Updated: 2024/03/03 12:59:48 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...);

int	ft_printf_nbr(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size += ft_printf_char('0');
	if (n == -2147483648)
	{
		size += ft_printf_string("-2147483648");
		return (size);
	}
	if (n < 0)
	{
		size += ft_printf_char('-');
		n = -n;
	}
	if (n > 0)
		size += ft_printf_unsigned((unsigned int)n);
	return (size);
}
