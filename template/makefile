
GPP = g++
FLAGS = -std=c++2a -Wall -Wextra -Wold-style-cast -Werror
# MULTI = -pthread -ltbb

# cs340 test command
# g++ -std=c++20 -Wall -Wextra -Wold-style-cast -Werror -pthread -o a08.exe a08.cpp -ltbb

NAME = aoc
INPUT = input.dat

.SUFFIXES : .cpp .dat .o

# compile all .java files in src/
build:
	$(GPP) $(FLAGS) $(NAME).cpp -o $(NAME).exe

run: 
	./$(NAME).exe < $(INPUT)


clean:
	rm -f -r *.exe datadir/

.PHONY: build run clean
