/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:35:49 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/17 18:13:18 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

/*/////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void	ad_print_array(int size, int *vector);

int	main(void)
{
	int	*ptr;
	int	max;
	int	min;
	int	len;

	max = 42;
	min = 42;
	len = max - min;
	ptr = ft_range(min, max);
	ad_print_array(len, ptr);
}

void	ad_print_array(int size, int *vector)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%i", vector[i]);
		i++;
		if (i < size)
			printf(", ");
	}
	printf("\n");
}
*//////////////////////////////////////////////////////////////////////////////

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	len;
	int	i;

	if (min >= max)
	{
		ptr = (int *) malloc(sizeof(int *));
		ptr = NULL;
		return (ptr);
	}
	len = max - min;
	i = 0;
	ptr = (int *) malloc(sizeof(int *) * len);
	while (i < len)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
