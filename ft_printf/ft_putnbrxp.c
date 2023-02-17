/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrxp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnabaeei <nnabaeei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:10:09 by nnabaeei          #+#    #+#             */
/*   Updated: 2022/12/20 15:28:31 by nnabaeei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrxp(char flag, int *i, unsigned long long int n, char *base)
{
	unsigned long long int	j;

	j = n % 16;
	if (n / 16 > 0)
		ft_putnbrxp(flag, i, n / 16, base);
	ft_putchar(i, base[j]);
	return (0);
}
