/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:30:11 by pleblond           #+#    #+#             */
/*   Updated: 2024/11/05 21:47:31 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_nbr_rec(int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
	{
		len += ft_nbr_rec(nb / 10);
	}
	ft_print_char((nb % 10) + '0');
	len++;
	return (len);
}

int	ft_print_nbr(va_list args)
{
	int	len;
	int	nb;

	nb = va_arg(args, int);
	len = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		len = 11;
		return (len);
	}
	if (nb < 0)
	{
		ft_print_char('-');
		nb = -nb;
		len++;
	}
	len += ft_nbr_rec(nb);
	return (len);
}
