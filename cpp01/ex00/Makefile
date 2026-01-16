CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  main.cpp newZombie.cpp randomChump.cpp Zombie.cpp 
	
OBJS = $(SRCS:.cpp=.o)

HEDEAR = Zombie.hpp

NAME = zombie

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 
%.o: %.cpp $(HEDEAR)
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)


re: fclean all
