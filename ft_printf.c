/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:26:47 by elel-bah          #+#    #+#             */
/*   Updated: 2023/12/15 11:38:40 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, s);
	i = 0;
	len = 0;
	if (write(1, "", 0) < 0)
		return (-1);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			if (s[i + 1])
				len += ft_formats(args, s[++i]);
		}
		else
			len += ft_put_char(s[i]);
		i++;
	}
	va_end(args);
	return (len);
}
