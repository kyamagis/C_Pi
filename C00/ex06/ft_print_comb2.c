/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:33:32 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/28 16:37:29 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar4(char k1, char k2, char k3, char k4)
{
	ft_putchar(k1);
	ft_putchar(k2);
	write(1, " ", 1);
	ft_putchar(k3);
	ft_putchar(k4);
	if (k1 == '9' && k2 == '8' && k3 == '9' && k4 == '9' )
	{
		return ;
	}
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	k[4];

	i = 0;
	while (98 >= i)
	{
		j = i + 1;
		while (99 >= j)
		{
			k[0] = '0' + i / 10;
			k[1] = '0' + i % 10;
			k[2] = '0' + j / 10;
			k[3] = '0' + j % 10;
			ft_putchar4(k[0], k[1], k[2], k[3]);
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/