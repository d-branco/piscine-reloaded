/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:08:30 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/18 16:38:07 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define CHUNK_OF_BYTES_TO_READ 1024

void	ft_print_char_pointer(char *ptr);

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_print_char_pointer("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_print_char_pointer("Too many arguments.\n");
		return (2);
	}
	int	read_status = open(argv[1], O_RDONLY);
	if (read_status < 0)
	{
		ft_print_char_pointer("Error openning the file\n");
		return (3);
	}

	char	chunk[CHUNK_OF_BYTES_TO_READ];
	ssize_t	bytes_read;

	while ((bytes_read = read(read_status, chunk, CHUNK_OF_BYTES_TO_READ)) > 0)
		write(STDOUT_FILENO, chunk, bytes_read);
	
	if (bytes_read == -1)
	{
		ft_print_char_pointer("Cannot read file.");
		close(read_status);
		return (4);
	}
}

void	ft_print_char_pointer(char *ptr)
{
	int	j;

	j = 0;
	while (ptr[j] != '\0')
	{
		write(1, &ptr[j], 1);
		j++;
	}
}
