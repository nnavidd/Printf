/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnabaeei <nnabaeei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:55:37 by nnabaeei          #+#    #+#             */
/*   Updated: 2022/12/26 16:57:48 by nnabaeei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// typedef struct s_conversion{
// 	char	*flag;
// 	char	type;
// 	int		number;
// }	t_conv;
//typedef struct s_conversion t_conv;
int	chek_string(int *i, const char *ptr, va_list ap);
int	check_type_flag(int *i, const char *ptr, va_list ap);

int	ft_printf(const char *ptr, ...)
{
	int		count_add;
	va_list	ap;

	count_add = 0;
	va_start(ap, ptr);
	chek_string(&count_add, ptr, ap);
	va_end(ap);
	return (count_add);
}

int	chek_string(int *count_add, const char *ptr, va_list ap)
{
	while (*ptr)
	{
		if (*ptr != '%')
		{
			ft_putchar(count_add, *ptr);
			ptr++;
		}
		else if (*ptr == '%' && *(ptr + 1) == '%')
		{
			ft_putchar(count_add, 37);
			ptr += 2;
		}
		else
			ptr += check_type_flag(count_add, (ptr + 1), ap);
	}
	return (0);
}

int	check_type_flag(int *count_add, const char *ptr, va_list ap)
{
	int	j;

	j = 1;
	while (!check_type(ptr))
	{
		ptr++;
		j++;
	}
	if (check_type(ptr))
	{
		if ((*ptr == 'd') || (*ptr == 'i') || (*ptr == 'u'))
			j += write_diu(count_add, ptr, ap);
		if ((*ptr == 's') || (*ptr == 'c'))
			j += write_sc(count_add, ptr, ap);
		if ((*ptr == 'x') || (*ptr == 'X') || (*ptr == 'p'))
			j += write_xp(count_add, ptr, ap);
	}
	else if (check_flag(count_add, ptr))
		j++;
	else
		j++;
	return (j);
}
