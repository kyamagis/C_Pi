/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 21:53:39 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/30 21:20:38 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{	
	int	a;
	int	b;

	a = 3;
	b = 2;
	printf("%d", a);
	printf("\n");
	printf("%d", b);
	printf("\n");
	ft_div_mod(16, 9, &a, &b);
	printf("\n");
	printf("%d", a);
	printf("\n");
	printf("%d", b);
	printf("\n");
	return 0;
}*/
