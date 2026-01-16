CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  main.cpp
	
OBJS = $(SRCS:.cpp=.o)

NAME = brain

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)


re: fclean all
