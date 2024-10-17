/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:40:42 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/17 10:17:32 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_argv(int argc, char **argv);

int	main(int argc, char **argv)
{
	int		i;
	char	*strptr[argc - 1];

	i = 1;
	while (i < argc)
	{
		strptr[i - 1] = argv[i];
		i++;
	}

	print_argv(argc, argv);
}

void	print_argv(int argc, char **argv)
{
	int	i;
	
	i = 0;
	while (i < argc - 1)
	{
		ft_put_str(strptr[i]);
		ft_putchar('\n');
		i++;
	}
}
