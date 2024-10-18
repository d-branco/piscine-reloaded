/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:26:12 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/18 10:42:00 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int));
/*/////////////////////////////////////////////////////////////////////////////
void	ft_putnbr(int	nbr);

#include <stdio.h>

int	main(void)
{
	int	tab[] = {1, 2, 0, 4, -127, 42, 225};
	
	ft_foreach(tab, 7, &ft_putnbr),
	printf("\n");
}

void	ft_putnbr(int	nbr)
{
	printf("%i, ", nbr);
}
*//////////////////////////////////////////////////////////////////////////////

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
