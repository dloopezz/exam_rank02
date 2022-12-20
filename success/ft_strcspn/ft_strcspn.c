/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:30:59 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/11/28 16:01:28 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int	j = 0;

	while (s[i])
	{
		if (s[i] == reject[j])
		{
			j++;
			break;
		}
		i++;
	}
	return (i);
}

/* int	main()
{
	char *str = "Hello world";
	char *reject = "l";

	printf("FT: %lu", ft_strcspn(str, reject));
	//printf("Lib: %lu\n", strcspn(str, reject));
}
 */