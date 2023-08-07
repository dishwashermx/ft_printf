/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:22:08 by ghwa              #+#    #+#             */
/*   Updated: 2023/08/07 10:40:59 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putnbr(int n, int i);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_strlen(const char *s);
char	*ft_itoa(int n);
int		ft_putuintptr(unsigned int num, int x, int i, int c);
int		ft_putuintptrox(uintptr_t num, int x, int i);
int		ft_putunbr(unsigned int n, int i);
char	*ft_strdup(const char *s1);

#endif
