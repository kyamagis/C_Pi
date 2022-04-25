/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 21:53:39 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/25 16:17:54 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	z;

	z = *a;
	*a = *b;
	*b = z;
}

/*int	main(void)
{	
	int	x;
	int	y;

	x = 114;
	y = 514;
	printf("%d", x);
	printf("\n");
	printf("%d", y);
	printf("\n");
	ft_swap(&x, &y);
	printf("\n");
	printf("%d", x);
	printf("\n");
	printf("%d", y);
}
*/