CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 
	
OBJS = $(SRCS:.cpp=.o)

HEDEAR = HumanA.hpp  HumanB.hpp Weapon.hpp

NAME = weapon

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
