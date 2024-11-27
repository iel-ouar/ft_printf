/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:31:21 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/26 14:09:47 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H 
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_print_hexa(char type, unsigned int exa);
int	ft_print_str(char *s);
int	ft_print_p(void *p);
int	ft_print_nmbr(int n);
int	ft_print_nmbr_u(unsigned int n);
int	ft_print_char(char c);
int	ft_check_type(char type, va_list args);
int	ft_print_base16_low(unsigned int exa);
int	ft_print_base16_up(unsigned int exa);

#endif