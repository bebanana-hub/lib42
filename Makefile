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
PRINTF_DIR = ./ft_printf

GNL_OBJ_DIR = $(GNL_DIR)/$(OBJS_DIR)
PRINTF_OBJ_DIR = $(PRINTF_DIR)/$(OBJS_DIR)
GNL_OBJS = $(wildcard $(GNL_DIR)/$(OBJS_DIR)/*.o)
PRINTF_OBJS = $(wildcard $(PRINTF_DIR)/$(OBJS_DIR)/*.o)
PRINTF_OBJS_CHK = $(wildcard $(PRINTF_DIR)/$(OBJS_DIR)/chknpr/*.o)


all: $(NAME)

$(GNL_OBJ_DIR):
	@echo "Compiling GNL objects..."
	$(MAKE) -C $(GNL_DIR)

$(PRINTF_OBJ_DIR):
	@echo "Compiling FT_PRINTF objects..."
	$(MAKE) -C $(PRINTF_DIR)

$(OBJS_DIR):
	@echo "mkdir -p"
	@mkdir -p $(OBJS_DIR) 

$(NAME): $(OBJS) $(PRINTF_OBJS) $(GNL_OBJS) $(PRINTF_OBJS_CHK) | $(PRINTF_OBJ_DIR) $(GNL_OBJ_DIR)
	@echo "lib"
	$(AR) $@ $^

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	@echo "compiling"
	@$(CC) $(CFLAGS) -c $< -o $@


clean:
	@echo "clean"
	rm -fr $(OBJS_DIR)
	@$(MAKE) -C $(GNL_DIR) clean
	@$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus