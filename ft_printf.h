/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 01:29:18 by pleblond          #+#    #+#             */
/*   Updated: 2024/11/06 01:29:27 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_print_string(va_list args);
int		ft_print_nbr(va_list args);
int		ft_print_unbr(va_list args);
int		lequelchoisir(unsigned int nb, char c);
int		ft_print_pointer(void *ptr);
void	ft_print_char(char c);

#endif
