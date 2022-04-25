/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 03:37:25 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/07 18:54:36 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(len * sizeof(int));
	if (*range == 0)
		return (-1);
	i = 0;
	while (i < len)
	{
		*range[i] = min + i;
		i++;
	}
	return (len);
}

/*#include <stdio.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max);

void	run_test(int min, int max, int size)
{
	int	i;
	int	*t;

	i = ft_ultimate_range(&t, min, max);
	if (i == size)
	{
		printf("\nlength = %d\n", i);
		printf("tab: ");
		while (min < max)
		{
			printf("%d, ", *t);
			t++;
			min++;
		}
	}
	else
		printf("NG\n");
}

int main(void)
{
	run_test(1301, 1301, 0);
	run_test(2147483647, 3626, 0);
	run_test(0, 0, 0);
	run_test(0, 1, 1);
	run_test(0, 166, 166);
	run_test(15, 166, 151);
	run_test(16, 17, 1);
	run_test(5, 0, 0);
	run_test(8, 1, 0);
	run_test(-9, 2, 11);
	run_test(-8, 4, 12);
	run_test(-7, 5, 12);
	run_test(-5, 9, 14);
	run_test(-4, 17, 21);
	run_test(-1, 18, 19);
	return 0;
}*/
