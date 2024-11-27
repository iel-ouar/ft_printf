/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:45:57 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/27 14:42:36 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check_type(char type, va_list args)
{
	int	count;

	count = 0;
	if (type == 's')
		count = count + ft_print_str(va_arg(args, char *));
	else if (type == 'c')
		count = count + ft_print_char((char )va_arg(args, int));
	else if (type == 'd' || type == 'i')
		count = count + ft_print_nmbr(va_arg(args, int));
	else if (type == 'u')
		count = count + ft_print_nmbr_u(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		count = count + ft_print_hexa(type, va_arg(args, int));
	else if (type == 'p')
		count = count + ft_print_p(va_arg(args, void *));
	else if (type == '%')
		count = count + ft_print_char('%');
	else
	{
		count = count + ft_print_char('%');
		count = count + ft_print_char(type);
	}
	if (count < 0)
		return (-1);
	return (count);
}
