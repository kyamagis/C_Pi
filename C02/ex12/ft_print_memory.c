/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:45:59 by kyamagis          #+#    #+#             */
/*   Updated: 2022/01/01 17:33:25 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdint.h>

void	ft_print2(char x)
{
	if (x <= 9)
		x += '0';
	else
		x += 'a' - 10;
	write(1, &x, 1);
}

void	print_hex(uint8_t *addr, unsigned int dtlen)
{
	uint64_t		x64;
	unsigned int	i;

	x64 = (uint64_t)addr;
	i = 16;
	while (0 < i)
	{
		i--;
		ft_print2((x64 >> (i * 4)) & 0xf);
	}
	write(1, ": ", 2);
	i = 0;
	while (i < dtlen)
	{
		ft_print2(addr[i] >> 4);
		ft_print2(addr[i] & 0xf);
		i++;
		if ((i % 2) == 1)
			write(1, " ", 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	k;
	uint8_t			*adr;

	adr = (uint8_t *)addr;
	while (0 < size)
	{
		k = size;
		if (k > 16)
			k = 16;
		size -= k;
		print_hex(adr, k);
		write(1, " ", 1);
		while (k > 0)
		{
			if ((*adr < ' ') || ('~' < *adr))
				write(1, ".", 1);
			else
				write(1, adr, 1);
			k--;
			++adr;
		}
		write(1, "\n", 1);
	}
	return (addr);
}

/*int main(void)
{
    char addr[] = "abcdefghijkl\nmnopqrstuvwxyz";
    unsigned int size = sizeof(addr);
    char ar[] = "";
	
	ft_print_memory(addr, size);
	write(1, "\n", 1);
	ft_print_memory(ar, 1);
}*/