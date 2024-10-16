/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:40:42 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/16 17:05:39 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_put_str(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ptr_swap(int i, char **arg);

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
	i = 0;
	while (i < argc - 2)
	{
		if ((ft_strcmp(strptr[i + 1], strptr[i])) < 0)
		{
			ptr_swap(i, strptr);
			i = -1;
		}
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		ft_put_str(strptr[i]);
		ft_putchar('\n');
		i++;
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

int	ft_strcmp(char *s1, char *s2)
{
	int	j;

	j = 0;
	while ((s1[j] == s2[j]) && s1[j] != '\0')
		j++;
	return (s1[j] - s2[j]);
}

int	ptr_swap(int i, char **arg)
{
	char	*temp;

	if (arg[i][0] > arg[i + 1][0])
	{
		temp = arg[i];
		arg[i] = arg[i + 1];
		arg[i + 1] = temp;
		i = -1;
	}
	i++;
	return (i);
}