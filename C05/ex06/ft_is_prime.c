/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:19:25 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/06 05:10:34 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if ((nb % 2) == 0)
		return (0);
	i = 2;
	while ((nb / i) >= i)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

/*#include<stdio.h>
int	main(void)
{
	int n;

	n = - 2;
	while (n < 100)
	{
		printf("%d %d\n", n, ft_is_prime(n));
		n++;
	}
}*/