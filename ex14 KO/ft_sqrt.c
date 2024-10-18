/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:46:14 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/18 21:36:25 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

//////////////////////////////////////////////////////////////////////////////
int	main(void)
{
	printf("%i\n", ft_sqrt(132443844));
	printf("%i\n", ft_sqrt(-127));
	printf("%i\n", ft_sqrt(0));
	printf("%i\n", ft_sqrt(1));
	printf("%i\n", ft_sqrt(2));
	printf("%i\n", ft_sqrt(4));
	printf("%i\n", ft_sqrt(132443844));
}
//////////////////////////////////////////////////////////////////////////////

int	ft_sqrt(int nb)
{
	int	half;
	int	j;

	half = nb / 2;
	j = 1;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while (j <= half)
	{
		if (j * j == nb)
			return (j);
		j++;
	}
	return (0);
}
