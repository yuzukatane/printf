/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuzu <kyuzu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 10:18:47 by kyuzu             #+#    #+#             */
/*   Updated: 2022/06/05 10:18:25 by kyuzu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...) __attribute__((format(printf, 1, 2)));
int	ft_putnbr_base(long long n, char *base);
int	ft_putchar(char c);
int	ft_putnbr_ull(unsigned long long n);
int	ft_put_ad(unsigned long long n, char *base);
int	ft_putstr(char *s);
int	ft_distribution(const char **format, va_list args, int len, char *str);

#endif