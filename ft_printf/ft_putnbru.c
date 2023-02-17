/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnabaeei <nnabaeei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:10:09 by nnabaeei          #+#    #+#             */
/*   Updated: 2022/12/07 21:18:44 by nnabaeei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru( int *i, unsigned int n, char *base)
{
	unsigned long int	j;

	j = n % 10;
	if (n / 10 > 0)
		ft_putnbru(i, n / 10, base);
	ft_putchar(i, base[j]);
	return (0);
}
