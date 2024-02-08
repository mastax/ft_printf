/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:28:00 by elel-bah          #+#    #+#             */
/*   Updated: 2023/12/15 12:03:20 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr(long nbr)
{
	int	cont;

	cont = 0;
	if (nbr < 0)
	{
		ft_put_char('-');
		nbr = -nbr;
		cont += 1;
	}
	if (nbr > 9)
	{
		cont += ft_put_nbr(nbr / 10);
		cont += ft_put_nbr(nbr % 10);
	}
	else
		cont += ft_put_char(nbr + '0');
	return (cont);
}
