# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 16:35:03 by vgalloni          #+#    #+#              #
#    Updated: 2025/01/29 17:28:03 by vgalloni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c chknpr/ft_check.c chknpr/ft_print_char.c \
 chknpr/ft_print_int.c chknpr/ft_puthex.c

OBJS_DIR = obj
OBJS = $(addprefix $(OBJS_DIR)/, $(SRC:.c=.o))

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(OBJS)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)/chknpr
	
$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)

re: clean all

.PHONY: all clean re