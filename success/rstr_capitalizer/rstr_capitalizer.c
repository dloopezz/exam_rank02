/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:00:58 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/11/30 15:22:33 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int cont = 1;

	if (argc >= 2)
	{
		while (cont < argc)
		{
			i = 0;
			while (argv[cont][i])
			{
				if (argv[cont][i] >= 'A' && argv[cont][i] <= 'Z')
					argv[cont][i] += 32;
				i++;
			}
			i = 0;
			while (argv[cont][i + 1])
			{
				if ((argv[cont][i] >= 'a' && argv[cont][i] <= 'z') && (argv[cont][i + 1] == ' ' || argv[cont][i + 1] == '\t'))
					argv[cont][i] -= 32;
				write(1, &argv[cont][i], 1);
				i++;
			}
			if (!argv[cont][i + 1])
			{
				if (argv[cont][i] >= 'a' && argv[cont][i] <= 'z')
					argv[cont][i] -= 32;
				write(1, &argv[cont][i], 1);
			}
			write(1, "\n", 1);
			cont++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
