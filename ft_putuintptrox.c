/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuintptrox.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:19:50 by ghwa              #+#    #+#             */
/*   Updated: 2023/08/07 10:05:01 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_putuintptrox(uintptr_t num, int x, int i)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (x == 1)
	{
		ft_putstr("0x");
		if (num == 0)
		{
			ft_putnbr(0, 1);
			return (3);
		}
	}
	if (num != 0)
	{
		i = ft_putuintptrox(num / 16, 0, ++i);
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
