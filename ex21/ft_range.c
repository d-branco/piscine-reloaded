/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:35:49 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/17 14:35:53 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

//////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

/*print_array_of_ints(int *vector)
{
	
}*/

int	main(void)
{
	int	*ptr;

	ptr = ft_range(1, 0);
	//print_array_of_ints(ft_range(0, 0));
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
