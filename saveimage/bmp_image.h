/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bmp_image.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:27:25 by zakdim            #+#    #+#             */
/*   Updated: 2021/01/09 19:52:54 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BMP_IMAGE_H
# define BMP_IMAGE_H
# include "../cub3.h"

typedef struct	s_bitmap_file_header
{
	unsigned int	bf_size;
	unsigned short	bf_reserved1;
	unsigned short	bf_reserved2;
	unsigned int	bf_off_bits;
}				t_bitmap_file_header;

typedef struct	s_bitmap_info_header
{
	unsigned int	bi_size;
	int				bi_width;
	int				bi_height;
	unsigned short	bi_planes;
	unsigned short	bi_bit_count;
	unsigned int	bi_compression;
	unsigned int	bi_size_image;
	int				bi_x_pels_per_meter;
	int				bi_y_pels_per_meter;
	unsigned int	bi_clr_used;
	unsigned int	bi_clr_important;
}				t_bitmap_info_header;

int				save_bmp(t_cube *cube);

#endif
