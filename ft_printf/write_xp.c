/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_xp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnabaeei <nnabaeei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:29:31 by nnabaeei          #+#    #+#             */
/*   Updated: 2022/12/20 15:27:57 by nnabaeei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_xp(int *i, const char *ptr, va_list ap)
{
	int	j;

	j = 0;
	if (*ptr == 'x')
		ft_putnbrxp('x', i, va_arg(ap, unsigned int), "0123456789abcdef");
	else if (*ptr == 'X')
		ft_putnbrxp('X', i, va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (*ptr == 'p')
	{
		ft_putstr("0x");
		(*i) += 2;
		ft_putnbrxp('p', i, va_arg(ap, unsigned long int), "0123456789abcdef");
	}
	j++;
	return (j);
}
