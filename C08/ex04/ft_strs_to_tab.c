/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:31:40 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/07 18:41:20 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tem;
	int			i;
	char		*dest;

	i = 0;
	tem = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (tem == 0)
		return (0);
	while (i <= ac)
	{
		if (i == ac)
		{
			tem[i].str = 0;
			break ;
		}
		tem[i].size = ft_strlen(av[i]);
		tem[i].str = av[i];
		dest = 0;
		dest = (char *)malloc(sizeof(char) * (tem[i].size + 1));
		if (dest == 0)
			return (0);
		tem[i].copy = ft_strcpy(dest, av[i]);
		i++;
	}
	return (tem);
}
