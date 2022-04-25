/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:03:20 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/06 22:10:33 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		i++;
	}
	return (i);
}

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

char	*ft_strdup(char *src)
{
	char	*prc;

	if (src == 0)
		return (0);
	if (src[0] == '\0')
		return (0);
	prc = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (prc == 0)
		return (0);
	return (ft_strcpy(prc, src));
}

/*#include <string.h>
#include <stdio.h>
int main(void)
{
    char *src = "hello";
    printf("%s\n", ft_strdup(src));
    printf("%s\n", strdup(src));

    char *src1 = "";
    printf("%s\n", ft_strdup(src1));
    printf("%s\n", strdup(src1));
	 printf("%s\n", ft_strdup(src1));
}*/