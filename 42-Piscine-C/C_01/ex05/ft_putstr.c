/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik < kisik@student.42kocaeli.com.tr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:59:40 by kisik             #+#    #+#             */
/*   Updated: 2023/02/10 19:18:55 by kisik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	char name[5] = {'k', 'e', 'r', 'e', 'm'};
	ft_putstr(name);
	return 0;
}

