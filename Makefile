# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/31 14:50:44 by vgalloni          #+#    #+#              #
#    Updated: 2025/05/09 18:59:02 by vgalloni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lib42.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

##############################################################################################################################
##############################################################################################################################
#* lib42 sources
SRC = 	ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_split.c ft_strchr.c ft_strdup.c \
		ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c \
		ft_toupper.c ft_count_occ.c ft_countfd_lines.c \
		ft_error.c ft_free_arr.c ft_lstadd_back.c \
		ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c ft_lstmap.c \
		ft_lstnew.c ft_lstsize.c ft_putchar.c \
		ft_putstr.c ft_strclen.c ft_strndup.c

#* lib42 objects
OBJS_DIR = obj
OBJS = $(addprefix $(OBJS_DIR)/, $(SRC:.c=.o))

##############################################################################################################################
#!	gnl

GNL_DIR = ./gnl
GNL_OBJ_DIR = $(GNL_DIR)/$(OBJS_DIR)

#*	gnl sources
GNL_SRCS = $(GNL_DIR)/gnl.c $(GNL_DIR)/gnl_utils.c

#*	gnl objects
GNL_OBJS = $(addprefix $(GNL_DIR)/$(OBJS_DIR)/, $(notdir $(GNL_SRCS:.c=.o)))

##############################################################################################################################
#!	printf

PRINTF_DIR = ./ft_printf
PRINTF_OBJ_DIR = $(PRINTF_DIR)/$(OBJS_DIR)

#*	printf sources
PRINTF_SRCS		= 	$(PRINTF_DIR)/ft_printf.c
PRINTF_CHK_SRCS	=	$(PRINTF_DIR)/chknpr/ft_check.c $(PRINTF_DIR)/chknpr/ft_print_char.c \
					$(PRINTF_DIR)/chknpr/ft_print_int.c $(PRINTF_DIR)/chknpr/ft_puthex.c

#*	printf objects
PRINTF_OBJS = $(addprefix $(PRINTF_DIR)/$(OBJS_DIR)/, $(notdir $(PRINTF_SRCS:.c=.o)))
PRINTF_CHK_OBJS = $(addprefix $(PRINTF_DIR)/$(OBJS_DIR)/chknpr/, $(notdir $(PRINTF_CHK_SRCS:.c=.o)))

##############################################################################################################################
##############################################################################################################################


all: $(NAME)

$(GNL_OBJS):
	@echo "Compiling GNL objects..."
	$(MAKE) -sC $(GNL_DIR)

$(PRINTF_OBJS):
	@echo "Compiling FT_PRINTF objects..."
	$(MAKE) -sC $(PRINTF_DIR)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR) 

$(NAME): $(OBJS) $(PRINTF_OBJS) $(GNL_OBJS) $(PRINTF_CHK_OBJS)
	$(AR) $@ $^

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -fr $(OBJS_DIR)
	@$(MAKE) -sC $(GNL_DIR) clean
	@$(MAKE) -sC $(PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus