/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kooyama <kooyama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 20:47:01 by kooyama           #+#    #+#             */
/*   Updated: 2023/06/27 20:47:08 by kooyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

//ft_print_hex
int		ft_hex_len(unsigned	int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_print_hex(unsigned int num, const char format);

//ft_print_ptr
int		ft_ptr_len(uintptr_t num);
void	ft_put_ptr(uintptr_t num);
int		ft_print_ptr(unsigned long long ptr);

//ft_print_unsigned
int		ft_num_len(unsigned	int num);
char	*ft_uitoa(unsigned int n);
int		ft_print_unsigned(unsigned int n);
char	*ft_itoa(int nb);

//ft_printf
int		ft_printchar(int c);
int		ft_formats(va_list args, const char format);
int		ft_printf(const char *format, ...);

//ft_print_utils
void	ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printpercent(void);
void	ft_putchar_fd(char c, int fd);

#endif
