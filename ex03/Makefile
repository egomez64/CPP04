NAME = materia

GXX = c++

CFLAGS = -Wall -Werror -Wextra -g -std=c++98

SRC = main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = AMateria.hpp \
			Character.hpp \
			Cure.hpp \
			Ice.hpp \
			ICharacter.hpp \
			IMateriaSource.hpp \
			MateriaSource.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(GXX) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(GXX) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re