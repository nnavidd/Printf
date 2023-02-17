/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnabaeei <nnabaeei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:26:30 by nnabaeei          #+#    #+#             */
/*   Updated: 2022/12/07 17:06:48 by nnabaeei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int *i, int n)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar(i, '-');
		num = -n;
	}
	else
		num = n;
	if (num > 9)
	{
		ft_putnbr(i, num / 10);
		num %= 10;
	}
	ft_putchar(i, num + '0');
	return (0);
}
