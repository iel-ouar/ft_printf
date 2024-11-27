/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nmbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:36:03 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/26 15:24:00 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_nmbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return(count = count + ft_print_str("-2147483648"));
	else if (n < 0)
	{
		count = count + ft_print_char('-');
		n = -n;
	}
	if (n > 9)
		count = count + ft_print_nmbr(n / 10);
	count = count + ft_print_char(n % 10 + 48);
	if (count < 0)
		return (-1);
	return (count);
}
