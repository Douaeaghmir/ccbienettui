NAME = push_swap
CHECKER = checker
SRC = mandtory/error_handle.c mandtory/pa_pb.c mandtory/positions.c mandtory/push_swap.c mandtory/ra_rb_rr.c mandtory/rra_rrb_rrr.c\
	mandtory/sa_sb_ss.c mandtory/sorting_handling.c mandtory/split.c mandtory/stack_utils.c mandtory/main.c
SRCBNS = bonus/checker.c bonus/error_handle_bonus.c bonus/pa_pb_bonus.c bonus/ra_rb_rr_bonus.c bonus/rra_rrb_rrr_bonus.c\
	bonus/sa_sb_ss_bonus.c bonus/split_bonus.c bonus/utils.c bonus/getnext_line/get_next_line.c bonus/getnext_line/get_next_line_utils.c\
	bonus/stack_utils_bonus.c bonus/positions_bonus.c
HEADER = push_swap.h
HEADERBNS = push_swap_bonus.h
HEADERGET = bonus/getnext_line/get_next_line.h
OBJS = $(SRC:.c=.o)
OBJBNS = $(SRCBNS:.c=.o)
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

all: $(NAME) logo

# Define color codes
PINK=\033[38;5;205m
BLUE=\033[38;5;39m
RESET=\033[0m

logo:
	@echo "$(PINK)\n ██▓███   █    ██   ██████  ██░ ██   ██████  █     █░ ▄▄▄       ██▓███     "
	@echo "$(BLUE)▓██░  ██▒ ██  ▓██▒▒██    ▒ ▓██░ ██▒▒██    ▒ ▓█░ █ ░█░▒████▄    ▓██░  ██▒   "
	@echo "$(PINK)▓██░ ██▓▒▓██  ▒██░░ ▓██▄   ▒██▀▀██░░ ▓██▄   ▒█░ █ ░█ ▒██  ▀█▄  ▓██░ ██▓▒   "
	@echo "$(BLUE)▒██▄█▓▒ ▒▓▓█  ░██░  ▒   ██▒░▓█ ░██   ▒   ██▒░█░ █ ░█ ░██▄▄▄▄██ ▒██▄█▓▒ ▒   "
	@echo "$(PINK)▒██▒ ░  ░▒▒█████▓ ▒██████▒▒░▓█▒░██▓▒██████▒▒░░██▒██▓  ▓█   ▓██▒▒██▒ ░  ░   "
	@echo "$(BLUE)▒▓▒░ ░  ░░▒▓▒ ▒ ▒ ▒ ▒▓▒ ▒ ░ ▒ ░░▒░▒▒ ▒▓▒ ▒ ░░ ▓░▒ ▒   ▒▒   ▓▒█░▒▓▒░ ░  ░   "
	@echo "$(PINK)░▒ ░     ░░▒░ ░ ░ ░ ░▒  ░ ░ ▒ ░▒░ ░░ ░▒  ░ ░  ▒ ░ ░    ▒   ▒▒ ░░▒ ░        "
	@echo "$(BLUE)░░        ░░░ ░ ░ ░  ░  ░   ░  ░░ ░░  ░  ░    ░   ░    ░   ▒   ░░          "
	@echo "$(PINK)            ░           ░   ░  ░  ░      ░      ░          ░  ░            $(RESET)\n"

$(NAME): $(OBJS)
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

$(CHECKER): $(OBJBNS)
	${CC} ${CFLAGS} ${OBJBNS} -o ${CHECKER}
 
%.o: %.c $(HEADER)	$(HEADERBNS) $(HEADERGET)
	$(CC) $(CFLAGS) -c $<
bonus:$(CHECKER)

clean:
	$(RM) $(OBJS) $(OBJBNS)

fclean: clean
	$(RM) $(NAME) $(CHECKER)

re: fclean all
