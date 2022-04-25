/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:02:10 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/02 17:40:58 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>
#include <string.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*void ft_putisnull(char *str, int size)
{
    int    i;
    char c;

    i = 0;
    while (i < size)
    {
        c = '0' + (str[i] == '\0');
        write (1, &c, 1);
        i++;
    }

}
int	main(void)
{
	char	dest[] = "1234567";
	char	src[] = "89";
	unsigned int n;

	n = 5;
	printf("%s\n", ft_strncpy(dest, src, n));
	printf("\n");
	ft_putisnull(dest, 15);
	printf("\n");
	
	printf("%s\n", strncpy(dest, src, n));
	printf("\n");
	ft_putisnull(dest, 15);
	return (0);
}*/