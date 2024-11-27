/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:36:07 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/26 14:42:47 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_str(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (count = count + ft_print_str("(null)"));
	while (s[i])
	{
		count = count + ft_print_char(s[i]);
		i++;
	}
	if (count < 0)
		return (-1);
	return (count);
}
