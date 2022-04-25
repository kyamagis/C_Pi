/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 20:18:14 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/02 21:10:11 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	nb;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	nb = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (nb);
}

/*#include<stdio.h>
int	main(void)
{
	int	i;

	printf("%d\n", ft_fibonacci(-9));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	i = 0;
	while (i <= 13)
	{
		printf("%d,", ft_fibonacci(i));
		i++;
	}
	printf("\n%d\n", ft_fibonacci(13));
	return (0);
}*/