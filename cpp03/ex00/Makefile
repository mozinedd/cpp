CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  ClapTrap.cpp main.cpp
	
OBJS = $(SRCS:.cpp=.o)

NAME = claptrap

HEADER = ClapTrap.hpp 
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