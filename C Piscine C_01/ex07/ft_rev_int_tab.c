/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:21:29 by vmikayel          #+#    #+#             */
/*   Updated: 2022/02/11 00:08:28 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	gt;

	i = 0;
	while (i < size / 2)
	{
		gt = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = gt;
		i++;
	}
}
