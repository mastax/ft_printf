/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:26:34 by elel-bah          #+#    #+#             */
/*   Updated: 2023/12/15 11:36:57 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, char format)
{
	int	p_len;

	p_len = 0;
	if (format == 'c')
		p_len += ft_put_char(va_arg(args, int));
	else if (format == 's')
		p_len += ft_put_s(va_arg(args, char *));
	else if (format == 'i' || format == 'd')
		p_len += ft_put_nbr(va_arg(args, int));
	else if (format == 'u')
		p_len += ft_put_nbr(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		p_len += ft_put_hex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		p_len += ft_put_p(va_arg(args, long));
	else
		p_len += ft_put_char(format);
	return (p_len);
}
