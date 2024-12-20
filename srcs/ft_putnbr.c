/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:40:02 by eblancha          #+#    #+#             */
/*   Updated: 2024/11/21 11:49:33 by eblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// function that writes a number
int	ft_putnbr(int n)
{
	int		count;
	char	*number;

	count = 0;
	number = ft_itoa(n); // we call itoa to convert int into char string
	count = ft_putstr(number); // we write said string
	free(number);
	return (count); // we return length of string
}
