/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuintptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:19:50 by ghwa              #+#    #+#             */
/*   Updated: 2023/08/07 10:45:07 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_putuintptr(unsigned int num, int x, int i, int c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c == 1)
		hex = "0123456789ABCDEF";
	if (x == 1)
	{
		if (num == 0)
		{
			ft_putnbr(0, 1);
			return (1);
		}
	}
	if (num != 0)
	{
		i = ft_putuintptr(num / 16, 0, ++i, c);
		ft_putchar(hex[num % 16]);
	}
	return (i);
}

// int	main(void)
// {
// 	uintptr_t	t;

// 	t = 140732800296880;
// 	ft_putuintptrX(t, 1);
// 	return (0);
// }
