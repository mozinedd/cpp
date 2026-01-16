CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  megaphone.cpp
	
OBJS = $(SRCS:.cpp=.o)

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 
%.o: %.c
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)


re: fclean all
