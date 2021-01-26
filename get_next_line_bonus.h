/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 13:40:18 by ceccentr          #+#    #+#             */
/*   Updated: 2020/06/06 13:46:06 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_list
{
	int				fd;
	char			*content;
	struct s_list	*next;
}					t_gnl;
int					get_next_line(int fd, char **line);
char				*ft_substr(char const *s, unsigned int start, size_t len);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *str);
char				*ft_strjoin(char *s1, char *s2, int flag);
char				*ft_strchr(const char *str, int ch);
t_gnl				*ft_lstadd_front(t_gnl **head, t_gnl *new);
t_gnl				*check_fd(t_gnl *head, int fd);
t_gnl				*new_list(int fd);
int					get_line(t_gnl **head, t_gnl *tmp, char **line);

#endif
