# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgalloni <vgalloni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 16:35:03 by vgalloni          #+#    #+#              #
#    Updated: 2025/01/29 17:28:07 by vgalloni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	gnl.c gnl_utils.c

OBJS_DIR = obj
OBJS = $(addprefix $(OBJS_DIR)/, $(SRC:.c=.o))

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(OBJS)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)
	
$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -fr $(OBJS_DIR)

re: clean all

.PHONY: all clean re