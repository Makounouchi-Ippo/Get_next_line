# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/20 19:52:59 by mehel-ka          #+#    #+#              #
#    Updated: 2017/11/23 21:37:59 by mehel-ka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

C_FILES +=  ft_memset.c ft_bzero.c ft_memccpy.c ft_memchr.c
C_FILES +=  ft_memcmp.c ft_memcpy.c ft_memmove.c ft_strlen.c
C_FILES +=  ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c
C_FILES +=  ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c
C_FILES +=  ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c
C_FILES +=  ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c
C_FILES +=  ft_isprint.c ft_toupper.c ft_tolower.c ft_strlcat.c
C_FILES +=  ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c
C_FILES +=  ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c
C_FILES +=  ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c
C_FILES +=  ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c
C_FILES +=  ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c
C_FILES +=  ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c

O_FILES +=  ft_memset.o ft_bzero.o ft_memccpy.o ft_memchr.o
O_FILES +=  ft_memcmp.o ft_memcpy.o ft_memmove.o ft_strlen.o
O_FILES +=  ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o
O_FILES +=  ft_strncat.o ft_strchr.o ft_strrchr.o ft_strstr.o
O_FILES +=  ft_strnstr.o ft_strcmp.o ft_strncmp.o ft_strncmp.o ft_atoi.o
O_FILES +=  ft_isdigit.o ft_isalpha.o ft_isalnum.o ft_isascii.o
O_FILES +=  ft_isprint.o ft_toupper.o ft_tolower.o ft_strlcat.o
O_FILES +=  ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o
O_FILES +=  ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o
O_FILES +=  ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o
O_FILES +=  ft_strjoin.o ft_strtrim.o ft_strsplit.o ft_itoa.o
O_FILES +=  ft_putchar.o ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o
O_FILES +=  ft_putnbr.o ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o

all : $(NAME)

$(NAME) :
		@gcc -c $(FLAGS) $(C_FILES) -I.
		@ar rc $(NAME) $(O_FILES)
		@ranlib $(NAME)

.PHONY : all clean fclean re

clean :
		@/bin/rm -f $(O_FILES)

fclean : clean
		@/bin/rm -f $(NAME)
re : fclean all
