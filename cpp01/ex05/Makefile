CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  main.cpp Harl.cpp
	
OBJS = $(SRCS:.cpp=.o)

HEDEAR = Harl.hpp

NAME = harl

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
