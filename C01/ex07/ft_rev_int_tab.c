/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 19:05:15 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/26 19:27:43 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	k;

	j = 0;
	while (j < size / 2)
	{
		k = tab[j];
		tab[j] = tab[size - j - 1];
		tab[size - j - 1] = k;
		j++;
	}
}

/*int	main(void)
{	
	int	num[] = {1, 2, 3, 4, 5};
	int	i;

	i = 0;
	while (i < 5)
	{
		printf("%d ", num[i]);
		i++;
	}
	ft_rev_int_tab(num, 5);
	printf("\n");
	i = 0;
	while (i < 5)
	{
		printf("%d ", num[i]);
		i++;
	}
	return (0);
}*/
