
NAME        = phonebook
CXX         = g++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -f
SRC         = main.cpp \
              Contact.cpp \
              PhoneBook.cpp
OBJ         = $(SRC:.cpp=.o)
GREEN       = \033[0;32m
YELLOW      = \033[0;33m
RED         = \033[0;31m
RESET       = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)[✔] $(NAME) compiled successfully!$(RESET)"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "$(YELLOW)[+] Compiling:$(RESET) $<"

clean:
	@$(RM) $(OBJ)
	@echo "$(RED)[✗] Object files removed.$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)[✗] Executable removed.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
