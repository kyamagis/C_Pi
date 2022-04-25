/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 19:32:21 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/03 14:44:46 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	ans = 1;
	while (power != 0)
	{	
		ans *= nb;
		power--;
	}
	return (ans);
}

/*#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 0));
	printf("%d\n", ft_iterative_power(5, 2));
	printf("%d\n", ft_iterative_power(5, -2));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 3));
	printf("%d\n", ft_iterative_power(0, -2));
	printf("%d\n", ft_iterative_power(-5, 0));
	printf("%d\n", ft_iterative_power(-5, 2));
	printf("%d\n", ft_iterative_power(-5, 1));
	printf("%d\n", ft_iterative_power(-5, -2));
	return (0);
}*/