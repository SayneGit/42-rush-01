/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:27:36 by bsouleau          #+#    #+#             */
/*   Updated: 2021/09/12 11:47:35 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "lines_columns.h"
#include <stdio.h>

char	*ft_parse(char *str, char *out);
void	ft_param(char *str, t_lines_rows *rows);
void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	t_lines_rows	rows;
	char			out[16];

	if (argc == 2)
	{
		ft_parse(argv[1], out);
		ft_param(out, &rows);
		printf("%s Up\n", rows.up);
		printf("%s Down\n", rows.down);
		printf("%s Left\n", rows.left);
		printf("%s Right\n", rows.right);
	}
	else
		ft_putstr("ERROR");
}
