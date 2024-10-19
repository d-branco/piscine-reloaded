/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:46:14 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/19 11:13:46 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

/*/////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_sqrt(132443844));
	printf("%i\n", ft_sqrt(-127));
	printf("%i\n", ft_sqrt(0));
	printf("%i\n", ft_sqrt(1));
	printf("%i\n", ft_sqrt(2));
	printf("%i\n", ft_sqrt(3));
	printf("%i\n", ft_sqrt(4));
	printf("%i\n", ft_sqrt(42));
	printf("%i\n", ft_sqrt(225));
}
*//////////////////////////////////////////////////////////////////////////////

int	ft_sqrt(int nb)
{
	int	j;

	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	j = 1;
	while (j * j < nb)
		j++;
	if (j > (nb / j))
		return (0);
	return (j);
}
