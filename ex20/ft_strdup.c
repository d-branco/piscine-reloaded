/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:17:54 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/17 13:33:47 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);

/*/////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int	main(void)
{
	char	*text0;
	char	*text1;

	text0 = "Quarenta e dois";
	printf("Endereco: %p;    Texto: %s\n", &text0, text0);
	text1 = ft_strdup(text0);
	printf("Endereco: %p;    Texto: %s\n", &text1, text1);
}
*//////////////////////////////////////////////////////////////////////////////

char	*ft_strdup(char *src)
{
	int		len;
	char	*ptr;

	len = ft_strlen(src) + 1;
	ptr = (char *) malloc(sizeof(char) * len);
	len = 0;
	while (src[len] != '\0')
	{
		ptr[len] = src[len];
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
		j++;
	return (j);
}
