/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daslanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:35:55 by daslanya          #+#    #+#             */
/*   Updated: 2020/09/20 21:15:56 by daslanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			if ((!i && !j) || (i > 0 && j > 0 && i == y - 1 && j == x - 1))
				ft_putchar('/');
			else if ((j == 0 && i == y - 1) || (j == x - 1 && i == 0))
				ft_putchar('\\');
			else if (i == 0 || j == 0 || i == y - 1 || j == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
