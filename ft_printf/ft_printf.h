/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:45:29 by vgalloni          #+#    #+#             */
/*   Updated: 2025/01/10 17:10:42 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int			ft_printf(const char *format, ...);
int			ft_spcheck(const char *format, va_list args);
int			ft_spputstr(char *s);
int			ft_spputnbr(int n);
int			ft_spputchar(char c);
int			ft_spprintc(va_list args);
int			ft_spprints(va_list args);
int			ft_spprintp(va_list args);
int			ft_spprintX(va_list args);
int			ft_spprintx(va_list args);
int			ft_spprintid(va_list args);
int			ft_spprintu(va_list args);
int			ft_spputhex(unsigned long num, char *prefix);
int			ft_spputhexmaj(unsigned long num);
int			ft_spputnbru(unsigned int n);
int			ft_spprintc(va_list args);
int			ft_spprints(va_list args);
int			ft_spprintp(va_list args);
int			ft_spprintxmaj(va_list args);
int			ft_spprintx(va_list args);

#endif
