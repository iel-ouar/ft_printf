/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base16_low.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:16:28 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/27 17:15:37 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_base16_low(unsigned int exa)
{
	int	count;

	count = 0;
	if (exa >= 16)
		count = count + ft_print_base16_low(exa / 16);
	count = count + ft_print_char("0123456789abcdef"[exa % 16]);
	if (count < 0)
		return (-1);
	return (count);
}
