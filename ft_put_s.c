/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:28:32 by elel-bah          #+#    #+#             */
/*   Updated: 2023/12/15 12:05:41 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_s(char *str)
{
	unsigned int	x;

	x = 0;
	if (!str)
	{
		ft_put_s("(null)");
		return (6);
	}
	while (str[x])
	{
		ft_put_char(str[x]);
		x++;
	}
	return (x);
}