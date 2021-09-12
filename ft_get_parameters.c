/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_parameters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:15:49 by bsouleau          #+#    #+#             */
/*   Updated: 2021/09/12 11:45:45 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "lines_columns.h"

char	*ft_parse(char *str, char *out);

void	ft_param(char *str, t_lines_rows *rows)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i < 4)
			rows->up[i] = str[i];
		else if (i >= 4 && i < 8)
			rows->down[i - 4] = str[i];
		else if (i >= 8 && i < 12)
			rows->left[i - 8] = str[i];
		else if (i >= 12)
			rows->right[i - 12] = str[i];
		i++;
	}
	rows->up[4] = '\0';
	rows->left[4] = '\0';
	rows->right[4] = '\0';
	rows->down[4] = '\0';
}

/* int	main(int argc, char *argv[])
{
	t_lines_rows	rows;
	char			out[16];

	if (argc == 2)
	{
		ft_parse(argv[1], out);
		ft_param(out, &rows);
		printf("%s\n", rows.up);
		printf("%s\n", rows.down);
		printf("%s\n", rows.left);
		printf("%s\n", rows.right);
	}
	else
		printf("Splitting Error\n");
	return (0);
} */
