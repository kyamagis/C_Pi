/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:02:36 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/01 20:15:32 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] - s2[i]) == 0 && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char s1m[] = "ABCD" ;
	char s2m[] = "A";
	char s10[] = "ABC" ;
	char s20[] = "ABC";
	char s1p[] = "A2CDE" ;
	char s2p[] = "ABC";

	printf("%d\n", ft_strcmp(s1m, s2m));
	printf("%d\n", ft_strcmp(s10, s20));
	printf("%d", ft_strcmp(s1p, s2p));
}*/