/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 16:05:42 by nfinkel           #+#    #+#             */
/*   Updated: 2018/08/25 20:31:26 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_H
# define MALLOC_H

# include <unistd.h>
# include <stdbool.h>
# include <sys/mman.h>

# define TINY
# define SMALL
# define LARGE

bool		g_mutex;

extern void	free(void *ptr);
extern void	*malloc(size_t size);
extern void	*realloc(void *ptr, size_t size);
extern void	show_alloc_mem(void);
extern void	show_alloc_mem_ex(void);

#endif
