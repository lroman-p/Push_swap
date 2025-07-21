/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:40:36 by lroman-p          #+#    #+#             */
/*   Updated: 2024/03/03 13:24:34 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>

int	ft_printf_char(char c);
int	ft_printf(const char *str, ...);
int	ft_printf_string(char *str);
int	ft_printf_nbr(int n);
int	ft_printf_unsigned(unsigned int n);
int	ft_printf_hexadecimal(unsigned int num, const char word);
int	ft_printf_pointer(unsigned long long ptr);
int	ft_isdigit(int c);

#endif
