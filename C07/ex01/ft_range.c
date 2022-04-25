/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:52:42 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/06 22:14:12 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tem;
	int	len;
	int	i;

	if (min >= max)
		return (0);
	len = max - min;
	tem = malloc(len * sizeof(int));
	if (tem == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		tem[i] = min + i;
		i++;
	}
	return (tem);
}

/*#include <stdio.h>
int main(void)
{
    int i = 0;

    int *s = ft_range(4, 11);
    while (i < 7)
    {
        printf("%i", s[i]);
        i++;
    }
    printf("\n45678910\n");

    i = 0;
    s = ft_range(-5, 3);
    while (i < 8)
    {
        printf("%i", s[i]);
        i++;
    }
    printf("\n-5-4-3-2-1012\n");


    free(s);
}*/