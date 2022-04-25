/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:18:21 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/28 16:30:37 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
		return ;
	}
	else
	{
		ft_putchar('P');
	}
}

/*int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(-5);
	ft_is_negative(5);
	return (0);
}*/