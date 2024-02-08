/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:27:10 by elel-bah          #+#    #+#             */
/*   Updated: 2023/12/15 11:41:06 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_put_s(char *str);
int	ft_put_char(char c);
int	ft_formats(va_list args, char format);
int	ft_put_nbr(long nbr);
int	ft_put_hex(unsigned long num, char format);
int	ft_put_p(unsigned long ptr);

#endif
