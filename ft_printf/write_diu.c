/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_diu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnabaeei <nnabaeei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:29:31 by nnabaeei          #+#    #+#             */
/*   Updated: 2022/12/07 21:19:39 by nnabaeei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	write_diu(int *i, const char *ptr, va_list ap)
{
	int	j;

	j = 0;
	if (*ptr == 'd')
		ft_putnbr(i, va_arg(ap, int));
	else if (*ptr == 'i')
		ft_putnbr(i, va_arg(ap, int));
	else if (*ptr == 'u')
		ft_putnbru(i, va_arg(ap, unsigned int), "0123456789");
	j++;
	return (j);
}
