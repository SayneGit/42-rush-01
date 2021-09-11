/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_parameters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:27:47 by bsouleau          #+#    #+#             */
/*   Updated: 2021/09/11 19:04:02 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "lines_columns.h"
#include "ft_convert.c"


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

int	main(int argc, char *argv[])
{
	if (argv[1] == 0)
		printf("ERROR\n");
	else
	{.
	char out[16];
	(void) argc;
	t_lines_rows	rows;

	ft_convert(argv[1], out);
	ft_param(out, &rows);
	printf("%s\n", rows.up);
	printf("%s\n", rows.down);
	printf("%s\n", rows.left);
	printf("%s\n", rows.right);
	}
	return (0);
}
