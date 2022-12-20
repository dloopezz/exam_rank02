/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-s <dlopez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:36:05 by dlopez-s          #+#    #+#             */
/*   Updated: 2022/11/30 13:59:17 by dlopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
    int i = 0;
    int nb = 0;
    int sign = 1;

    while (str[i] ==  ' ' || str[i] ==  '\t' || str[i] ==  '\n' || str[i] ==  '\v' || str[i] ==  '\f' || str[i] ==  '\r')
        i++;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - 48);
        i++;
    }
    nb *= sign;
    return (nb);
}

/* int main()
{
    printf("Mío: %i\n", ft_atoi("  \t  \n \f \v \r  456"));
    printf("Lib: %i", atoi("  \t  \n \f \v \r  456"));
} */