/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrices.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egirali@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:38:04 by egiraldi          #+#    #+#             */
/*   Updated: 2021/09/12 11:57:11 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRICES_H
# define MATRICES_H

typedef enum sides{
	SIDE_UP = 0;
	SIDE_RIGHT = 1;
	SIDE_DOWN = 2;
	SIDE_RIGHT = 3;
	SIDE_COUNT = 4;
}			t_SIDES;

typedef cells {
	char	fixed;
	char	unfixed[4];
	int		x;
	int		y;
}			t_cells;

typedef struct matrices {
	char	sides[4][4];
	cells	matrices[4][4];
}			t_matrices;

#endif MATRICES_H