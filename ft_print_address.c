/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:56:54 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/15 02:26:17 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_print_address(void *ptr)
{
	int	count;

	if (ptr == NULL)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ft_putstr("0x");
	count = 1;
	count += ft_decimal_to_hexa((unsigned long)ptr, 0);
	return (count + 2);
}