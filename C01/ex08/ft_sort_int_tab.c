/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 19:05:18 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/27 20:06:11 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				z = tab[i];
				tab[i] = tab[j];
				tab[j] = z;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{	
	int	tab[] = {5, 3, 1, 2, 4};
	int	size = 5;

	ft_sort_int_tab(tab, 5);

	int k = 0;
	while (k < size)
	{
		printf("%d ", tab[k]);
		k++;
	}
	return (0);
}*/