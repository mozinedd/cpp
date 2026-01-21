CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  ClapTrap.cpp main.cpp ScavTrap.cpp
	
OBJS = $(SRCS:.cpp=.o)

NAME = scavtrap

HEADER = ClapTrap.hpp ScavTrap.hpp
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 
%.o: %.c $(HEADER)
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)


re: fclean all