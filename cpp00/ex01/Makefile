CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g 

SRCS =  Contact.cpp PhoneBook.cpp main.cpp
	
OBJS = $(SRCS:.cpp=.o)

HEDEAR = Contact.hpp PhoneBook.hpp

NAME = phonebook

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
