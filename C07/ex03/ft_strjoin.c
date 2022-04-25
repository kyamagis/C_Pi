/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 03:58:45 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/12 14:40:02 by kyamagis         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	k;

	k = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	dest[k] = '\0';
	return (dest);
}

int	ft_tleng(int size, char **strs, char *sep)
{
	int		i;
	int		tleng;

	tleng = 0;
	i = 0;
	while (i < size)
	{
		tleng += ft_strlen(strs[i]);
		i++;
	}
	tleng += (size - 1) * ft_strlen(sep);
	return (tleng);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		tleng;

	if (size < 0)
		return (0);
	tleng = ft_tleng(size, strs, sep);
	dest = malloc((tleng + 1) * sizeof(char));
	if (dest == 0)
		return (0);
	dest[0] = '\0';
	tleng = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (size - 1 - i != 0)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}

#include <stdio.h>
int main(void)
{
    char *str[] = {"apple", "pine", "greap"};
    char **strs = str;
    char *sep;
    char *s;

    sep = ",";
    s = ft_strjoin(3, strs, sep);
    printf("%s\n", s);
    printf("apple,pine,grape\n");

    char *str2[] = {"pen", "apple", "apple", "pen"};
    strs = str;
    sep = "- -";
    s = ft_strjoin(4, str2, sep);
    printf("%s\n", s);
    printf("cat- -dog- -catcat- -a\n");
}