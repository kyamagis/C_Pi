/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 18:27:06 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/01 20:02:59 by kyamagis         ###   ########.fr       */
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

char	ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	k;

	k = ft_strlend(dest);
	j = 0;
	while (j <= nb)
	{
		dest[k] += src[j];
		k++;
		j++;
	}
	dest[k] = '\0';
	return (*dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	retlen;
	unsigned int	nb;

	dlen = ft_strlend(dest);
	slen = ft_strlend(src);
	retlen = dlen + slen;
	nb = size - 1 - dlen;
	if (nb > 0)
		ft_strncat(&dest[dlen], src, nb);
	return (retlen);
}

/*int	main(void)
{
	char	dest[13] = "abcdef";
	char	src[] = "_ABC_";

	printf("dest = %s\n", dest);
	printf("src = %s\n", src);
	printf("n=%d dest = %s\n", ft_strlcat(dest, src, 10), dest);
}*/