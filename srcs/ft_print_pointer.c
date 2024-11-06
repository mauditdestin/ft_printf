/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:38:55 by pleblond           #+#    #+#             */
/*   Updated: 2024/11/05 21:47:28 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	put_nbr_base(unsigned long nb, char *base)
{
	int	i;
	
	i = 0;
	if (nb >= 16)
	{
		i += put_nbr_base(nb / 16, base);
	}
	ft_print_char(base[nb % 16]);
	i++;
	return (i);
}

int	ft_print_pointer(void *ptr)
{
	int	i;

	i = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	i += write (1, "0x", 2);
	i += put_nbr_base((unsigned long)ptr, "0123456789abcdef");
	return (i);
}
