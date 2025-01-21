NAME = lib42.a

SRC_DIR = . ft_printf ft_printf/chknpr gnl
SRC = $(foreach dir, $(SRC_DIR), $(wildcard $(dir)/*.c))

OBJS_DIR = obj
OBJS = $(addprefix $(OBJS_DIR)/, $(SRC:.c=.o))

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $@ $^

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(dir $@)

clean:
	rm -fr $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus