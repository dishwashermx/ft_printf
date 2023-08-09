/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:22:08 by ghwa              #+#    #+#             */
/*   Updated: 2023/08/09 09:57:25 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_pfputnbr(int n, int i);
int		ft_pfputstr(char *s);
int		ft_pfputchar(char c);
int		ft_pfstrlen(const char *s);
int		ft_pfputuintptr(unsigned int num, int x, int i, int c);
int		ft_pfputunbr(unsigned int n, int i);

#endif
