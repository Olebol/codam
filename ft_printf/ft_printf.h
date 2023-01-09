/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: opelser <opelser@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 22:04:57 by opelser       #+#    #+#                 */
/*   Updated: 2023/01/09 21:06:38 by opelser       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

typedef int	(*t_function)(va_list);

int		ft_printf(const char *format, ...);

int		ft_conversion(unsigned long num, int base, char *characters);

int		ft_printf_c(va_list va_ptr);
int		ft_printf_s(va_list va_ptr);
int		ft_printf_p(va_list va_ptr);
int		ft_printf_di(va_list va_ptr);
int		ft_printf_u(va_list va_ptr);
int		ft_printf_hex(va_list va_ptr);
int		ft_printf_hexup(va_list va_ptr);
int		ft_printf_percent(va_list va_ptr);

#endif