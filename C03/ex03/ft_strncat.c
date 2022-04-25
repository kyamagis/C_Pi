/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:19:05 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/02 16:21:38 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlend(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{	
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	k;

	k = ft_strlend(dest);
	j = 0;
	while ((j < nb) && (src[j] != '\0'))
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	dest[k] = '\0';
	return (dest);
}

/*int main(void)
{
	char	dest[100] = "Hellow";
	char	src[] = " World";
	unsigned int nb = 3;

	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}*/