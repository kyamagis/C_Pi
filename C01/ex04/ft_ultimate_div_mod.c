/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 16:18:33 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/30 21:27:15 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	z;

	z = *a / *b;
	*b = *a % *b;
	*a = z;
}

/*int	main(void)
{	
	int	a;
	int	b;

	a = 20;
	b = 3;
	printf("%d\t%d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d\t%d\n", a, b);
	return (0);
}*/