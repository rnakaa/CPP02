CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = My_First_Class_in_Orthodox_Canonical_Form

SRCS = main.cpp \
	   Fixed.cpp

HEADER = Fixed.hpp

OBJS = $(SRCS:.cpp=.o)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY:all
all:$(NAME)

.PHONY:clean
clean:
	rm -f $(OBJS)

.PHONY:fclean
fclean: clean
	rm -f $(NAME)

.PHONY:re
re:fclean all
