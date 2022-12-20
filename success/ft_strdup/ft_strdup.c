/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:00:52 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/11/29 16:09:44 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int		ft_strlen(const char *str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int	i = 0;
	int len;
	char *str;

	len = ft_strlen(s1);
	str = malloc((len + 1) * (sizeof(char)));
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
