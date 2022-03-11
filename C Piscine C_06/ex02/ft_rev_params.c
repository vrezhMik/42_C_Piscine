/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:03:23 by vmikayel          #+#    #+#             */
/*   Updated: 2022/02/24 11:33:53 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argv, char **argc)
{
	int	i;
	int	c;

	if (argv > 1)
	{
		c = argv - 1;
		i = 0;
		while (c != 0)
		{
			while (argc[c][i] != '\0')
			{
				write(1, &argc[c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			c--;
		}
	}
	return (0);
}
