/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:11:23 by lroman-p          #+#    #+#             */
/*   Updated: 2024/03/03 12:57:37 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length_pointer(unsigned long long ptr)
{
	int	len;

	len = 0;
	while (ptr > 0)
	{
		len++;
		ptr /= 16;
	}
	return (len);
}

void	ft_convert_pointer(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_convert_pointer(ptr / 16);
		ft_convert_pointer(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_printf_char(ptr + '0');
		else
			ft_printf_char(ptr -10 + 'a');
	}
}

int	ft_printf_pointer(unsigned long long ptr)
{
	int	size;

	size = 0;
	size += ft_printf_string("0x");
	if (ptr == 0)
		size += ft_printf_char('0');
	else
	{
		ft_convert_pointer(ptr);
		size += ft_length_pointer(ptr);
	}
	return (size);
}
