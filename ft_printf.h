/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 10:48:51 by abonnel           #+#    #+#             */
/*   Updated: 2020/12/22 13:52:18 by abonnel          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef	struct	s_printf
{
	va_list		parg;
	char		*format;
	char		flag;
	int			width;
	int			prec;
	char		spec;
	int			nb_char;
}				t_printf;

int				ft_printf(const char *str, ...) __attribute__
					((format(printf,1,2)));
void			print_conversion(t_printf *t_data, int *i);
int				specifier_is(t_printf *t_data, int i);
void			find_format(t_printf *t_data, int i, char *format);
void			ft_putchar(char c, t_printf *t_data);
void			print_nb(t_printf *t_data);
void			precise_nb(t_printf *t_data, char *nb, int nb_len);
void			print_hexa(t_printf *t_data);
void			print_padding(int padding, t_printf *t_data);
int				padding_nb(t_printf t_data, char *nb, int nb_len);
void			precise_nb(t_printf *t_data, char *nb, int nb_len);
void			print_char(t_printf *t_data);
void			flag_print(t_printf *t_data, char *nb, int nb_len, int padding);
void			printf_string(t_printf *t_data);
int				hexa_len(unsigned long long nb);
char			*ft_itoabase(unsigned long long nb, char *base);
void			print_perc(t_printf *t_data);
void			put_0x(t_printf *t_data);

#endif
