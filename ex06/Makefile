NAME = harlFilter
CFLAGS =  -Wall -Wextra -Werror -std=c++98 -MMD -MP
RM = rm -rf
CC = c++
SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)

all : $(NAME)

$(NAME):$(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
				$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ) $(DEP)

fclean : clean
	$(RM) $(NAME)

re : fclean all

-include $(DEP)


