CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp  
	
OBJS = $(SRCS:.cpp=.o)

HEDEAR = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

NAME = animal

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