/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 16:06:07 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/03 17:29:28 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_case(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(('a' <= str[i] && str[i] <= 'z') \
		|| ('A' <= str[i] && str[i] <= 'Z') \
		|| ('0' <= str[i] && str[i] <= '9')))
		{
			if ('a' <= str[i + 1] && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] + ('A' - 'a');
			}
		}
		if (('a' <= str[i] && str[i] <= 'z') \
		|| ('A' <= str[i] && str[i] <= 'Z') \
		|| ('0' <= str[i] && str[i] <= '9'))
		{
			if ('A' <= str[i + 1] && str[i + 1] <= 'Z')
			{
				str[i + 1] = str[i + 1] + ('a' - 'A');
			}
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	if ('a' <= str[0] && str[0] <= 'z')
	{
		str[0] = str[0] + ('A' - 'a');
	}
	ft_case(str);
	return (str);
}

/*int	main(void)
{
	char	str[] = "salut, COMMEnT tu vas ? 42Mots quarante-deux; cinquante+et+un";

	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/