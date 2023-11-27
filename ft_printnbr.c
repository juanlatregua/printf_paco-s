/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:30:33 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/27 19:30:17 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_char_and_check_error(char c) 
{
    int ret;
	ret = ft_printchar(c);
    if (ret == -1)
        return (-1);
    return ret;
}

int	ft_printnbr(int n)
{
    int	len;

    len = 0;
    if (n == -2147483648)
    {
        ft_printstr("-2147483648");
        return (11);
    }
    else if (n < 0)
    {
        len += print_char_and_check_error('-');
        len += ft_printnbr(-n);
    }
    else if (n > 9)
    {
        len += ft_printnbr(n / 10);
        len += ft_printnbr(n % 10);
    }
    else
        len += print_char_and_check_error(n + 48);
    return (len);
}
