/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nxte <nxte@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:31:55 by nxte              #+#    #+#             */
/*   Updated: 2025/08/12 19:37:43 by nxte             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

// int	main(int ac, char **arv)
// {
// 	ft_is_negative(-125);
// 	ft_is_negative(25);
// 	ft_is_negative(-5);
// 	ft_is_negative(5);
// 	ft_is_negative(-1);
// 	ft_is_negative(-1);
// 	ft_is_negative(0);
// 	return (0);
// }