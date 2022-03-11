/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:02:12 by vmikayel          #+#    #+#             */
/*   Updated: 2022/02/08 22:57:52 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	unsigned short	i;

	i = 48;
	while (i <= 57)
	{
		write(1, &i, 1);
		i++;
	}
}
