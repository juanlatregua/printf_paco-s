/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:22:07 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/27 18:53:39 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char	*str)
{
	int	len;
	int ret;

	len = 0;
	ret = 0;
	if (!str)
		str = "(null)";
	while (str[len] != '\0')
	{
		ret = ft_printchar(str[len]);
		if (ret == -1)
			return (-1);
		len++;
	}
	return (len);
}
