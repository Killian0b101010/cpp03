NAME = main 
SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)
FLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP
CC = c++
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
				$(CC) $(FLAGS) -o $(NAME)

%.o : %.cpp 
		$(CC) $(FLAGS) $< -o $@ 

clean : 
			$(RM) $(NAME)

fclean: clean 
				$(RM) $(DEP) $(OBJ)

re : fclean

-include $(DEP)
