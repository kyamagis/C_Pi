/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:23:28 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/03 14:39:27 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	x = 1;
	while (i <= nb)
	{
		x = x * i;
		i++;
	}
	return (x);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-5));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d", ft_iterative_factorial(5));
	return (0);
}*/