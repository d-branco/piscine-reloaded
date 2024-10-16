/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:51:54 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/16 15:09:57 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putchar(char c);

//////////////////////////////////////////////////////////////////////////////
int	main(void)
{
	ft_putstr("As armas e os baroes assinalados\n"
		"Que da ocidental praia Lusitana,\n");
}
//////////////////////////////////////////////////////////////////////////////

void	ft_putstr(char *str)
{
	int		j;

	j = 0;
	while (str[j] != '\0')
	{
		ft_putchar(str[j]);
		j++;
	}
}
