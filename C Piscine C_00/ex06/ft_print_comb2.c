/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:17:40 by vmikayel          #+#    #+#             */
/*   Updated: 2022/02/08 22:58:51 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print(int n)
{
	int	a;
	int	b;

	if (n < 9)
	{	
		n += 48;
		write(1, "0", 1);
		write(1, &n, 1);
	}
	else
	{
		a = (n / 10) + 48;
		b = (n % 10) + 48;
		write(1, &a, 1);
		write(1, &b, 1);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print(x);
			write(1, " ", 1);
			ft_print(y);
			if (x < 98 || y < 99)
			{
				write(1, ", ", 2);
			}
			++y;
		}
		++x;
	}
}
