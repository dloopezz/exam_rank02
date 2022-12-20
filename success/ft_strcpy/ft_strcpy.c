/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:10:03 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/11/28 15:29:07 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)  //copy s2 to s1
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}

/* int	main()
{
	char 	*s2 = "Hello world";
	char	*s1;

	printf("%s", ft_strcpy(s1, s2));
	//printf("%s", strcpy(s1, s2));
} */