/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:45:42 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/18 11:02:27 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*));

/*/////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int	is_non_empty_string(char *str)
{
	return (str != NULL && str[0] != '\0');
}

int	main(void)
{
	char	*tab[] = {"Um", "Dois", "Zero", 0, "Quarenta e dois", NULL};
	int		count;

	count = ft_count_if(tab, is_non_empty_string);
	printf("Count of non-empty strings: %d\n", count);
	return (0);
}
*//////////////////////////////////////////////////////////////////////////////

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
