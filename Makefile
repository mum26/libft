NAME        = libft.a
CFLAGS      = -Wall -Wextra -Werror -g3
IDFLAGS     = -I$(INCS)
AR          = ar rcs
ROOT        = .
INCS        = $(ROOT)/incs
SRCS        = $(addprefix $(ROOT)/, \
                   $(addprefix ft_libc/, \
                        ft_isalpha.c \
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
                        ft_isspace.c \
                        get_num_of_digit_base.c \
                        get_u_num_of_digit_base.c \
                        ft_ulltoa_base.c \
                        ft_lltoa_base.c \
                        ft_lstnew.c \
                        ft_lstadd_front.c \
                        ft_lstsize.c \
                        ft_lstlast.c \
                        ft_lstadd_back.c \
                        ft_lstdelone.c \
                        ft_lstclear.c \
                        ft_lstiter.c \
                        ft_lstmap.c \
                        cleanup.c \
                  ) \
                  $(addprefix ft_stdio/, \
                        ft_printf.c \
						ft_fprintf.c \
						handling_char.c \
						handling_dec.c \
						handling_hex.c \
                  ) \
              )

OBJS_DIR    = $(ROOT)/objs
OBJS        = $(SRCS:.c=.o)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS) 
	@$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

.c.o:
	@$(CC) $(CFLAGS) $(IDFLAGS) -c $< -o $@ 

.PHONY: clean
clean:
	$(RM) $(OBJS)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all
