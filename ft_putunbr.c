/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:31:43 by ghwa              #+#    #+#             */
/*   Updated: 2023/08/07 09:47:37 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"
#include <stdio.h>

int	ft_putunbr(unsigned int n, int i)
{
	int	x;

	x = (int)n;
	if (n > 9)
	{
		i = ft_putunbr(n / 10, ++i);
	}
	else
		i++;
	ft_putchar((n % 10) + '0');
	return (i);
}
