/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  lpernici <lpernici@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:56:44 by  lpernici         #+#    #+#             */
/*   Updated: 2025/05/23 18:37:40 by  lpernici        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strdup(const char *source_str);
char	*ft_strchr(const char *str, int target_char);
char	*ft_substr(const char *str, size_t start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
int		ft_strlen(const char *str);

#endif
