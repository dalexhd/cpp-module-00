NAME			= megaphone

SRCS			= megaphone.cpp
OBJS			= $(SRCS:.cpp=.o)

OBJ_DIR			= obj/
CC				= clang++
RM				= rm -rf
FLAGS			= -Wall -Wextra -Werror -I.

all:			$(NAME)

################
##   COLORS   ##
################

Y					=	$(shell printf "\033[33m")
R					=	$(shell printf "\033[31m")
G					=	$(shell printf "\033[32m")
CYAN				=	$(shell printf "\033[36m")
B					=	$(shell printf "\033[34m")
X					=	$(shell printf "\033[0m")
UP					=	$(shell printf "\033[A")
CUT					=	$(shell printf "\033[K")
W					=	$(shell printf "\033[37m")
UND					=	$(shell printf "\033[4m")
BLINK				=	$(shell printf "\033[5m")
BOLD				=	$(shell printf "\033[1m")
UP					=	$(shell printf "\033[5A")
NORM_COLOR_T		=	$(shell printf "\033[0;1;141m")
NORM_COLOR			=	$(shell printf "\033[0;38;5;153m")
NORM_COLOR_WAR		=	$(shell printf "\033[38;5;214m")
NORM_COLOR_ERR		=	$(shell printf "\033[0;41m")
BG_X				=	$(shell printf "\033[0;39m")
TAB					=	$(shell printf "\t")


$(NAME):		$(OBJS)
				$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			## Remove all objects and executables.
				$(RM) $(OUTPUT)
				$(RM) $(NAME)
				@echo ${CUT}[${Y}$(OUTPUT)]${X} [Garbage collector:${Y} ${OUTPUT} $(NAME) *.o${X}][${G}OK!${X}]


re:				fclean $(NAME)

test:			$(NAME)
				./megaphone "shhhhh... I think the students are asleep..."
				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
				./megaphone

.PHONY:			all clean fclean re test
