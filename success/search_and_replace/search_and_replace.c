/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:09:34 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/11/30 13:32:56 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	if (argc == 4)
	{
		if ((ft_strlen(argv[2]) != 1) || (ft_strlen(argv[3]) != 1))
		{
			write(1, "\n", 1);
			exit(0);
		}
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][j])
				argv[1][i] = argv[3][j];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}