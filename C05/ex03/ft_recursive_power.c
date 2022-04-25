/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 20:02:00 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/02 20:17:43 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	nm;

	nm = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{	
		nm = ft_recursive_power(nb, (power - 1));
		return (nb * nm);
	}
}

/*#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(5, 2));
	printf("%d\n", ft_recursive_power(5, -2));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(0, 3));
	printf("%d\n", ft_recursive_power(0, -2));
	printf("%d\n", ft_recursive_power(-5, 0));
	printf("%d\n", ft_recursive_power(-5, 2));
	printf("%d\n", ft_recursive_power(-5, 1));
	printf("%d\n", ft_recursive_power(-5, -2));
	return (0);
}*/