NAME = main
SRC = main.cpp
CC =  c++
CFLAG = -Wall -Wextra -Werror -std=c++98 
OBJ = $(SRC:.cpp=.o)
RM = rm -rf 

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC)	$(CFLAG) $(OBJ) -o $(NAME)
%.o : %.cpp 
		$(CC) $(CFLAG) -c $< -o $@ 
clean : 
	$(RM) $(OBJ) 
fclean : 
	$(RM) $(NAME)
re : fclean all;

