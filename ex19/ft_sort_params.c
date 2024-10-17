/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:40:42 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/17 13:15:27 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_argv(int argc, char **argv);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < (argc - 1))
	{
		if (ft_strcmp(argv[i + 1], argv[i]) < 0)
		{
			temp = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = temp;
			i -= 2;
		}
		i++;
	}
	print_argv(argc, argv);
}

void	print_argv(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
