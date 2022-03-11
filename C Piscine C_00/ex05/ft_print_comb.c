/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:30:52 by vmikayel          #+#    #+#             */
/*   Updated: 2022/02/08 22:58:35 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	arr[3];

	arr[0] = 48;
	while (arr[0] < 56)
	{
		arr[1] = arr[0] + 1;
		while (arr[1] < 57)
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= 57)
			{
				if (arr[0] < arr[1] && arr[1] < arr[2] && arr[0] < arr[2])
				{
					write(1, &arr, 3);
					if (!(arr[0] == 55 && arr[1] == 56 && arr[2] == 57))
					{
						write(1, ", ", 2);
					}
				}
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}
