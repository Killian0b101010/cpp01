NAME = main 
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP
RM	= rm -rf

all : $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp 
		$(CC) $(CFLAGS) -c $< -o $@

clean : 
		$(RM) $(OBJ) $(DEP)

fclean : clean 
		$(RM) $(NAME) 

re: fclean all 

-include $(DEP)
