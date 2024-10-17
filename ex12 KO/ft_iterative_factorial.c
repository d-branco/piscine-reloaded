/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:23:03 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/17 18:50:40 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

/*/////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int	main(void)
{
		printf("%i\n", ft_iterative_factorial(-1));
		printf("%i\n", ft_iterative_factorial(0));
		printf("%i\n", ft_iterative_factorial(1));
		printf("%i\n", ft_iterative_factorial(12));
		printf("%i\n", ft_iterative_factorial(13));
		printf("%i\n", ft_iterative_factorial(42));
}
*//////////////////////////////////////////////////////////////////////////////

int	ft_iterative_factorial(int nb)
{
	int	j;

	if (nb < 1)
		return (0);
	j = nb;
	while (j > 1)
	{
		j--;
		if (nb >= 2147483648 / j)
			return (0);
		else
			nb *= j;
	}
	return (nb);
}
