NAME = lib42.a

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
		ft_putstr.c ft_strclen.c 

OBJS_DIR = obj
OBJS = $(addprefix $(OBJS_DIR)/, $(SRC:.c=.o))

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

GNL_DIR = ./gnl
GNL_LIB = $(GNL_DIR)/gnl.a

PRINTF_DIR = ./ft_printf
PRINTF_LIB = $(PRINTF_DIR)/printf.a

all: $(NAME)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(GNL_LIB):
	@$(MAKE) -C $(GNL_DIR)

$(PRINTF_LIB):
	@$(MAKE) -C $(PRINTF_DIR)

$(NAME): $(OBJS) $(PRINTF_LIB) $(GNL_LIB)
	@$(AR) $@ $^

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -fr $(OBJS_DIR)
	@$(MAKE) -C $(GNL_DIR) clean
	@$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -C $(GNL_DIR) fclean
	@$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re bonus