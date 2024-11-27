/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:59:06 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/27 14:10:01 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_base_16(unsigned long exa)
{
	int	count;

	count = 0;
	if (exa >= 16)
		count = count + ft_base_16(exa / 16);
	count = count + ft_print_char("0123456789abcdef"[exa % 16]);
	if (count < 0)
		return (-1);
	return (count);
}

int	ft_print_p(void *p)
{
	unsigned long	tmp;
	int				count;

	count = 0;
	tmp = (unsigned long) p;
	if (!tmp)
		return (count = count + ft_print_str("(nil)"));
	count = count + ft_print_str("0x");
	count = count + ft_base_16(tmp);
	if (count < 0)
		return (-1);
	return (count);
}
