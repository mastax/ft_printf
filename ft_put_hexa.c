/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:27:38 by elel-bah          #+#    #+#             */
/*   Updated: 2023/12/15 12:01:19 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned long num, char format)
{
	char	*hex_lower;
	char	*hex_upper;
	int		len;

	hex_upper = "0123456789ABCDEF";
	hex_lower = "0123456789abcdef";
	len = 0;
	if (num >= 16)
	{
		len += ft_put_hex(num / 16, format);
		len += ft_put_hex(num % 16, format);
	}
	else if (num < 16)
	{
		if (format == 'x')
			len += ft_put_char(hex_lower[num]);
		else if (format == 'X')
			len += ft_put_char(hex_upper[num]);
	}
	return (len);
}
