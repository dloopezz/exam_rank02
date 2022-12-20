/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:07:30 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/11/28 20:15:52 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int	i = 0;
	int	cont = 1;

	if (argc >= 2)
	{
		while (cont < argc)
		{
			while (argv[cont][i])
			{
				if (argv[cont][i] >= 'A' && argv[cont][i] <= 'Z')
					argv[cont][i] += 32;
				i++;
			}
			i = 0;
			if (argv[cont][i] >= 'a' && argv[cont][i] <= 'z')
				argv[cont][i] -= 32;
			write (1, &argv[cont][i], 1);
			i++;
			while (argv[cont][i])
			{
				if ((argv[cont][i - 1] == '\t' || argv[cont][i - 1] == ' ') && (argv[cont][i] >= 'a' && argv[cont][i] <= 'z'))
					argv[cont][i] -= 32;
				write (1, &argv[cont][i], 1);
				i++;
			}
			write (1, "\n", 1);
			i = 0;
			cont++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}
