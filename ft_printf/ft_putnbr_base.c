/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:14:51 by amayuk            #+#    #+#             */
/*   Updated: 2024/01/18 15:04:10 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	int		len;
	long	number;

	number = nbr;
	len = 0;
	if (number < 0)
	{
		number *= -1;
		write(1, "-", 1);
	}
	if (number < 16)
	{
		write(1, &base[number], 1);
		len++;
	}
	else if (number >= 16)
	{
		len += ft_putnbr_base(number / 16, base);
		len += ft_putnbr_base(number % 16, base);
	}
	return (len);
}
