/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:47:49 by vmikayel          #+#    #+#             */
/*   Updated: 2022/02/18 00:09:09 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	b = to_find;
	if (*b == '\0')
		return (str);
	while (*str)
	{
		if (*str == *b)
		{
			a = str;
			while (*a == *b || *b == '\0')
			{
				if (*b == '\0')
					return (str);
				a++;
				b++;
			}
			b = to_find;
		}
		str++;
	}
	return (0);
}
