/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:45:59 by kyamagis          #+#    #+#             */
/*   Updated: 2021/12/28 18:23:57 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = str[i] + ('A' - 'a');
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "He110w W0r1d";

	printf("%s", ft_strupcase(str));
	str[0] = '\0';
	printf("%s", ft_strupcase(str));
	return (0);
}*/