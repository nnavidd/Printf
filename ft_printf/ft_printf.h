/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnabaeei <nnabaeei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:30:39 by rburgsta          #+#    #+#             */
/*   Updated: 2022/12/07 21:18:57 by nnabaeei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *ptr, ...);
int	chek_string(int *i, const char *ptr, va_list ap);
int	check_type_flag(int *i, const char *ptr, va_list ap);
int	check_flag(int *i, const char *ptr);
int	check_type(const char *ptr);
int	write_diu(int *i, const char *ptr, va_list ap);
int	write_xp(int *i, const char *ptr, va_list ap);
int	write_sc(int *i, const char *ptr, va_list ap);
int	ft_putnbr(int *i, int n);
int	ft_putnbru( int *i, unsigned int n, char *base);
int	ft_putnbrxp(char flag, int *i, unsigned long long int n, char *base);
int	ft_putstr(char const *s);
int	ft_putchar(int *i, char c);

#endif