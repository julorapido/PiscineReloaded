/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:21:33 by jsaintho          #+#    #+#             */
/*   Updated: 2024/05/13 14:56:48 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void	display_file(char *f_name)
{
	int		fd;
	int		i;
	size_t	byte_read;
	char	buffer[32000];

	fd = open(f_name, O_RDONLY);
	byte_read = read(fd, buffer, sizeof(buffer));
	if (byte_read == -1 || fd == NULL)
	{
		write(2, "Cannot read file.", 18);
		return ;
	}
	i = 0;
	while (buffer[i] != '\0')
	{
		write(1, &buffer[i], 1);
		i++;
	}
	close (fd);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.", 18);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.", 19);
	}
	else
		display_file(argv[1]);
	return (0);
}
