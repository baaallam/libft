# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/19 02:58:44 by kbaaalla          #+#    #+#              #
#    Updated: 2026/10/26 14:03:23 by kbaaalla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_calloc.c ft_isdigit.c ft_lstadd_front.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c ft_toupper.c/
ft_isalnum.c ft_isprint.c ft_lstlast.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c libft.h ft_atoi.c ft_isalpha.c/
ft_itoa.c ft_lstnew.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c ft_bzero.c ft_isascii.c ft_lstadd_back.c ft_lstsize.c/
ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_lstdelone


HEADER = libft.h
CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))


all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re