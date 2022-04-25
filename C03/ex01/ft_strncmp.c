/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:53:59 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/02 17:16:49 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((i < n - 1) && ((s1[i] - s2[i]) == 0) \
	&& (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	unsigned int	n = 3;
	char s1m[] = "ABAE" ;
	char s2m[] = "ABZJE";
	char s10[] = "ABC" ;
	char s20[] = "ABC";
	char s1p[] = "ABCDE" ;
	char s2p[] = "ABB";

	printf("%d\n", ft_strncmp(s1m, s2m, n));
	printf("%d\n", ft_strncmp(s10, s20, n));
	printf("%d", ft_strncmp(s1p, s2p, n));
}*/