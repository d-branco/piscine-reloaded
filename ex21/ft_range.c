/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:35:49 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/17 15:42:23 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

//////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void	ad_print_array(int size, int *vector);

int	main(void)
{
	int	*ptr;
	int test[5] = {10, 20, 30, 40, 50};

	ad_print_array(5, test);

	ptr = ft_range(1, 0);
	ad_print_array(0, ptr);
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
//////////////////////////////////////////////////////////////////////////////

int	*ft_range(int min, int max)
{
	int	*ptr;

	if (min > max)
	{
		ptr = (int *) malloc(sizeof(int *));
		ptr = NULL;
		return (ptr);
	}

	ptr = (int *) malloc(sizeof(int *));
	ptr = NULL;
	return (ptr);
}
