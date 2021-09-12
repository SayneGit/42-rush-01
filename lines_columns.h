/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lines_columns.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:02:49 by bsouleau          #+#    #+#             */
/*   Updated: 2021/09/12 11:58:30 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINES_COLUMNS_H
# define LINES_COLUMNS_H

typedef struct s_lines_rows
{
	char	up[5];
	char	down[5];
	char	left[5];
	char	right[5];
}				t_lines_rows;

#endif