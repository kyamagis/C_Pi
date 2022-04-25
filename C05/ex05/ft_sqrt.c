/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 17:30:10 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/04 22:29:24 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	rt;

	rt = 1;
	if (nb < 1)
		return (0);
	while ((nb / rt) >= rt)
	{
		if (nb == rt * rt)
		{
			return (rt);
		}
		rt++;
	}
	return (0);
}

/*#include<stdio.h>
int	main(void)
{
	int	i;
	i = -4;
	while (i < 101)
	{
		printf ("%d, %d\n", i, ft_sqrt(i));
		i++;
	}
	printf ("\n");
	printf ("%d\n", 2147483646);
	printf ("%d\n", ft_sqrt(2147483647));
	printf ("\n");

	printf ("%d\n", 1600000000);
	printf ("%d\n", ft_sqrt(1600000000));
	printf ("\n");
}*/