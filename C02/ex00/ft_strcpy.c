/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 21:57:07 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/02 17:26:25 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>
#include <string.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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
	char	dest[100] = "012345678901234";
	char	src[100] = "Hello Wolrd";




	printf("%s\n", dest);
	ft_putisnull(dest, 30);
	printf("\n");
	
	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", dest);
	ft_putisnull(dest, 30);
	printf("\n");

	printf("%s\n", strcpy(dest, src));
	printf("%s\n", dest);
	ft_putisnull(dest, 30);
	printf("\n");
	return (0);
}*/