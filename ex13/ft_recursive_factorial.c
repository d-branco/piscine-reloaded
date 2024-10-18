/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:35:48 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/18 18:54:21 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

/*/////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_recursive_factorial(-1));
	printf("%i\n", ft_recursive_factorial(0));
	printf("%i\n", ft_recursive_factorial(1));
	printf("%i\n", ft_recursive_factorial(12));
	printf("%i\n", ft_recursive_factorial(13));
	printf("%i\n", ft_recursive_factorial(42));
}
*//////////////////////////////////////////////////////////////////////////////

int	ft_recursive_factorial(int nb)
{
	if (nb < 1 || nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	else
	{
		if (nb >= 2147483648 / (nb - 1))
			return (0);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
}
