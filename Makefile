NAME        = libft.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -g
AR          = ar rcs
RM          = rm -f
INC_DIR     = ./libft.h
SRC_DIR     = .
STD_SRCS    = ft_isalpha.c \
              ft_isdigit.c \
              ft_isalnum.c \
              ft_isascii.c \
              ft_isprint.c \
              ft_strlen.c \
              ft_memset.c \
              ft_bzero.c \
              ft_memcpy.c \
              ft_memmove.c \
              ft_strlcpy.c \
              ft_strlcat.c \
              ft_calloc.c \
              ft_strdup.c \
              ft_toupper.c \
              ft_tolower.c \
              ft_strchr.c \
              ft_strncmp.c \
              ft_memchr.c \
              ft_memcmp.c \
              ft_strnstr.c \
              ft_atoi.c \
              ft_strrchr.c \
              ft_substr.c \
              ft_strjoin.c \
              ft_strtrim.c \
              ft_split.c \
              ft_itoa.c \
              ft_strmapi.c \
              ft_striteri.c \
              ft_putchar_fd.c \
              ft_putstr_fd.c \
              ft_putendl_fd.c \
              ft_putnbr_fd.c \
              ft_isupper.c \
              ft_islower.c \
              ft_get_int_digit_cnt.c

BONUS_SRCS  = t_lstnew.c \
              ft_lstadd_front.c \
              ft_lstsize.c \
              ft_lstlast.c \
              ft_lstadd_back.c \
              ft_lstdelone.c \
              ft_lstclear.c \
              ft_lstiter.c \
              ft_lstmap.c

STD_OBJS    = $(STD_SRCS:.c=.o)
BONUS_OBJS  = $(BONUS_SRCS:.c=.o)

ifdef with_bonus
       OBJS += $(BONUS_OBJS)
endif

.PHONY: al
all: $(NAME)

$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: clean
clean:
	$(RM) $(STD_OBJS) $(BONUS_OBJS)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

.PHONY: bonus
bonus:
	@make with_bonus=1 all
