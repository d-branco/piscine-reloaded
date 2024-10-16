/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:28:51 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/16 15:38:04 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_put_str(char *str);

int	main(int argc, char **argv)
{
	int	j;

	j = 1;
	while (j < argc)
	{
		ft_put_str(argv[j]);
		ft_putchar('\n');
		j++;
	}
}

void	ft_put_str(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		ft_putchar(str[j]);
		j++;
	}
}
