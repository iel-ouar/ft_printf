/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base16_up.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:09:59 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/27 17:15:31 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_base16_up(unsigned int exa)
{
	int	count;

	count = 0;
	if (exa >= 16)
		count = count + ft_print_base16_up(exa / 16);
	count = count + ft_print_char("0123456789ABCDEF"[exa % 16]);
	if (count < 0)
		return (-1);
	return (count);
}
