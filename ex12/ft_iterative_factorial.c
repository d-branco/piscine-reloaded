/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:23:03 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/16 13:34:08 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

//////////////////////////////////////////////////////////////////////////////
int	main(void)
{
	int	i;

	i = 1;
	if (i)
	{
	i = ft_iterative_factorial(-127);
	i = ft_iterative_factorial(0);
	i = ft_iterative_factorial(1);
	i = ft_iterative_factorial(5);
	i = ft_iterative_factorial(7);
	i = ft_iterative_factorial(42);
	}
}
//////////////////////////////////////////////////////////////////////////////

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
