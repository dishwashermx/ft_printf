/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:31:43 by ghwa              #+#    #+#             */
/*   Updated: 2023/08/07 09:43:19 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"
#include <stdio.h>

int	ft_putnbr(int n, int i)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}	
	else if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
		i++;
	}
	if (n > 9)
	{
		i = ft_putnbr(n / 10, ++i);
	}
	else
		i++;
	ft_putchar((n % 10) + '0');
	return (i);
}
