/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:35:48 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/16 13:44:35 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

//////////////////////////////////////////////////////////////////////////////
int	main(void)
{
	int	i;

	i = 1;
	if (i)
	{
		i = ft_recursive_factorial(-127);
		i = ft_recursive_factorial(0);
		i = ft_recursive_factorial(1);
		i = ft_recursive_factorial(5);
		i = ft_recursive_factorial(7);
		i = ft_recursive_factorial(42);
	}
}
//////////////////////////////////////////////////////////////////////////////

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
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
