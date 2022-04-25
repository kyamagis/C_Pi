/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:45:59 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/03 16:29:01 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size == 0)
	{
		return (i);
	}
	return (i);
}

/*#include <stdio.h>
#include <string.h>
#include <unistd.h>
void ft_putisnull(char *str, int size)
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
	char	dest[100] = "dos";
	char	src[] = "Hellow";
	unsigned int	size = 5;

	printf("%s\n", dest);

	printf("%u\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	ft_putisnull(dest, 10);
	
	printf("\n");
	printf("%lu\n", strlcpy(dest, src, size));
	printf("%s\n", dest);
	ft_putisnull(dest, 10);


	return (0);
}*/
