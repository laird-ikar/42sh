# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 17:17:49 by bguyot            #+#    #+#              #
#    Updated: 2023/12/15 11:04:40 by bguyot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	42sh

SRCS_DIR	=	srcs/
LIBS_DIR	=	libs/
INCS_DIR	=	incs/

TYPES_DIR	=
TYPES		=	t_42sh															\
				t_code															\
				t_error															\

SOURCE		=	main															\

LIBFT_DIR	=	$(LIBS_DIR)libft/
LIBFT		=	$(LIBFT_DIR)libft.a

LIBS		=	$(LIBFT)
SRCS		=	$(addsuffix .c, $(addprefix $(SRCS_DIR), $(SOURCE)))
INCS		=	$(addsuffix .c, $(addprefix $(INCS_DIR), $(TYPES)$(SOURCE)))
OBJS		=	$(SRCS:.c=.o)

RM			=	rm -rf
CC			=	cc
CFLAGS		=	-Wall -Werror -Wextra -fsanitize=address -I $(INCS_DIR) -I $(LIBFT_DIR)

all:	$(NAME)

clean:
	$(MAKE) -C $(LIBFT_DIR)
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

$(NAME):	$(OBJS) $(INCS) $(LIBS)
	cc $(CFLAGS) -o $(NAME) $(OBJS) $(LIBS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o:		%.c
	cc $(CFLAGS) -o $@ -c $<

.PHONY:	all clean fclean re
