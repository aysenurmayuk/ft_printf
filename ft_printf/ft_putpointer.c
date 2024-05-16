/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:14:42 by amayuk            #+#    #+#             */
/*   Updated: 2024/01/18 13:14:43 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long n)
{
	int	len;

	len = 0;
	if (n < 16)
	{
		if (n % 16 < 10)
			len += ft_putchar((n % 16) + '0');
		else
			len += ft_putchar((n % 16) - 10 + 'a');
	}
	else if (n >= 16)
	{
		len += ft_putpointer(n / 16);
		len += ft_putpointer(n % 16);
	}
	return (len);
}
