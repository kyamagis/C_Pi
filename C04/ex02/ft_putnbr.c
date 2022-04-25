/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 19:30:04 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/30 19:31:31 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dig_p(int dig, unsigned int x)
{
	char			c[10];

	dig = 0;
	while (x > 0)
	{
		c[dig] = '0' + x % 10;
		x /= 10;
		dig++;
	}
	while (dig > 0)
	{
		--dig;
		ft_putchar(c[dig]);
	}
}

void	ft_putnbr(int nb)
{	
	unsigned int	x;
	int				dig;

	dig = 0;
	if (nb > 0)
	{	
		x = nb;
		ft_dig_p(dig, x);
		return ;
	}
	else if (nb == 0)
	{	
		x = nb;
		ft_putchar('0');
		return ;
	}
	else if (nb < 0)
	{
		x = -nb;
		ft_putchar('-');
		ft_dig_p(dig, x);
	}
}

/*int	main(void)
{
	ft_putnbr(2147483647);
	write(1, "\n", 2);
	ft_putnbr(-2147483648);
	write(1, "\n", 2);
	ft_putnbr(0);
	return (0);
}*/