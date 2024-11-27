/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:00:23 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/26 14:43:10 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_hexa(char type, unsigned int exa)
{
	int	count;

	count = 0;
	if (type == 'x')
		count = count + ft_print_base16_low(exa);
	else if (type == 'X')
		count = count + ft_print_base16_up(exa);
	if (count < 0)
		return (-1);
	return (count);
}
