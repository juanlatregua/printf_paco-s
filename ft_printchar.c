/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:56:09 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/27 11:38:02 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// añadimos excepcion de %c y de tabulacion
/**
 * @brief Imprime un caracter
 * el if es para que no imprima el caracter nulo
 * @param c caracter a imprimir
 * @return int 
 */
#include "ft_printf.h"

int	ft_printchar(int c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}
