/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:18:55 by lroman-p          #+#    #+#             */
/*   Updated: 2024/03/03 13:28:25 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>
#include <stdarg.h>

int	ft_select_format(va_list argument, const char word)
{
	int	size;

	size = 0;
	if (word == 'c')
		size += ft_printf_char(va_arg(argument, int));
	else if (word == 's')
		size += ft_printf_string(va_arg(argument, char *));
	else if (word == 'd' || word == 'i')
		size += ft_printf_nbr(va_arg(argument, int));
	else if (word == 'u')
		size += ft_printf_unsigned(va_arg(argument, unsigned int));
	else if (word == 'x' || word == 'X')
		size += ft_printf_hexadecimal(va_arg(argument, unsigned int), word);
	else if (word == 'p')
		size += ft_printf_pointer(va_arg(argument, unsigned long long));
	else if (word == '%')
		size += ft_printf_char('%');
	return (size);
}

int	ft_printf(const char *str, ...)
{
	int		i;		
	int		size;		
	va_list	argument;		

	if (!str)
		return (0);
	i = 0;
	size = 0;
	va_start(argument, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			size += ft_select_format(argument, str[i + 1]);
			i++;
		}
		else
			size += ft_printf_char(str[i]);
		i++;
	}
	va_end(argument);
	return (0);
}
