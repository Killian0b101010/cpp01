NAME : main
SRC: main.cpp
CFLAGS : -Wall -Wextra -Werror -std=c++98 
OBJ:$(SRC:.cpp=.o)
RM: rm -rf

all = $(NAME)

$(NAME) : $(OBJ)
			$(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp 
			$(CFLAGS) -c $< -o $@ 

clean : $(RM) $(OBJ) 

fclean : $(RM) $(NAME)

