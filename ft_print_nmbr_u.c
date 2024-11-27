/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nmbr_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:00:43 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/27 17:15:16 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nmbr_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count = count + ft_print_nmbr(n / 10);
	count = count + ft_print_char(n % 10 + 48);
	if (count < 0)
		return (-1);
	return (count);
}
